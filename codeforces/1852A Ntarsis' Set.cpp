#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

ll solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    if (a[0] != 1) return 1;
    ll c = 1, d, r;
    for (int i = 1; i < n; i++)
    {
        r = (a[i] - c - 1) / i;
        if (r >= k) return c + k * i;
        c += r * i;
        k -= r;
    }
    if (k > 0) c += n * k;
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << '\n';
    }
}