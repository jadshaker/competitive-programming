#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, y = 0;
        char c;
        bool valid = false;
        cin >> n;
        while (n--)
        {
            cin >> c;
            if (c == 'U') y++;
            else if (c == 'D') y--;
            else if (c == 'R') x++;
            else x--;
            if (x == 1 && y == 1) valid = true;
        }
        cout << (valid ? "YES" : "NO") << '\n';
    }
}