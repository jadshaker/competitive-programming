#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll mx = max(a, b), mn = min(a, b);
        if (mx > mn * 2) cout << "NO\n";
        else if ((a + b) % 3 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}