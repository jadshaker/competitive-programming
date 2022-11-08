#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ans(int n, vector<ll> p, int i, ll c_sum , ll sum)
{
    if (i == n - 1) return abs(sum - 2 * c_sum);
    return min(ans(n, p, i + 1, c_sum + p[i], sum), ans(n, p, i + 1, c_sum, sum));
}

int main()
{
    int n;
    cin >> n;
    ll s = 0;
    vector<ll> p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        s += p[i];
    }
    sort(p.begin(), p.end());
    cout << ans(n, p, 0, 0, s) << '\n';
}