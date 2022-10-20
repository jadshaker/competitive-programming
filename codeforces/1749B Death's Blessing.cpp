#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll solve()
{
    int n;
    ll s = 0;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    s = accumulate(a.begin(), a.end(), 0ll) + accumulate(b.begin(), b.end(), 0ll) - *max_element(b.begin(), b.end());
    return s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << '\n';
}