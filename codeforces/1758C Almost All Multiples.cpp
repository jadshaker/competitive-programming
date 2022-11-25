#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n % x)
        {
            cout << -1 << '\n';
            continue;
        }
        cout << x << ' ';
        for (int i = 2; i < n; i++)
            cout << (i == x ? n : i) << ' ';
        cout << 1 << '\n';
    }
}