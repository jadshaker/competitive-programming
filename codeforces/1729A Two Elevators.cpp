#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (abs(b - c) + c > a) return 1;
    else if (abs(b - c) + c == a) return 3;
    return 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << '\n';
}