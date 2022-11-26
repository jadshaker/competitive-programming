#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
  if (b == 0)
    return a;
  else
    return gcd(b, (a % b));
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ll a, g;
        cin >> n >> a;
        g = a;
        for (int i = 1; i < n; i++)
        {
            cin >> a;
            g = gcd(g, a);
        }
        cout << a / g << '\n';
    }
}