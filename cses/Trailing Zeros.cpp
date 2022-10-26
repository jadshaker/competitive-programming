#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, s = 0;
    cin >> n;
    for (ll i = 5; i <= n; i *= 5)
        s += n / i;
    cout << s << '\n';
}