#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll GCD(long long x, long long y)
{
    if (y == 0) return x;
    return GCD(y, x % y);
}

int solve()
{
    int n;
    cin >> n;
    vector<ll> a(n);
    cin >> a[0];
    ll g = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        g = GCD(g, a[i]);
    }
    if (g == 1) return 0;
    if (n == 1 || GCD(g, n) == 1) return 1;
    if (GCD(g, n - 1) == 1) return 2;
    return 3;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << '\n';
}