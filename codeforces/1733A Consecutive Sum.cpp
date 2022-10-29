#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve()
{
    int n, k;
    cin >> n >> k;
    ll s = 0;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
    {
        ll m = 0;
        for (int j = i; j < n; j += k)
            m = max(m, a[j]);
        s += m;
    }
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << '\n';
}