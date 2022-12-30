#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, c = 0;
        ll s = 0;
        cin >> n >> m;
        vector<ll> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        sort(a.begin(), a.end());
        int i = 0;
        while (c < m)
        {
            a[0] = b[i];
            sort(a.begin(), a.end());
            c++, i++;
        }
        for (int i = 0; i < n; i++)
            s += a[i];
        cout << s << '\n';
    }
}
