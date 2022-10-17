#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), c(n);
        if (n == 1)
        {
            cin >> n;
            cout << 1 << '\n';
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c[a[i] - 1] = i + 1;
        }
        for (int i = 0; i < n; i++)
            cout << (c[i] < n ? c[i] + 1 : n) << ' ';
        cout << '\n';
    }
}