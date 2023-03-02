#include <iostream>
#include <map>
using namespace std;

typedef long long ll;

int main()
{
    int n, x = 0, y = 0;
    string s;
    cin >> n >> s;
    map<int, map<int, bool> > m;
    m[0][0] = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'R') x++;
        else if (s[i] == 'L') x--;
        else if (s[i] == 'U') y++;
        else y--;
        if (m[x][y]) {
            cout << "Yes" << '\n';
            return 0;
        }
        m[x][y] = true;
    }
    cout << "No" << '\n';
}