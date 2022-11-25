#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m = 0;
        cin >> n;
        char c;
        while (n--)
        {
            cin >> c;
            m = max(c - 'a' + 1, m);
        }
        cout << m << '\n';
    }
}