#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        bool identical = true;
        string c1, c2;
        cin >> n >> c1 >> c2;
        for (int i = 0; i < n; i++)
            if (!((c1[i] == 'R' && c2[i] == 'R') || (c1[i] != 'R' && c2[i] != 'R')))
                identical = false;
        cout << (identical ? "YES" : "NO") << endl;
    }
}