#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q, odd = 0, even = 0, s = 0, a;
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2)
                odd++;
            else
                even++;
            s += a;
        }
        while (q--)
        {
            int type;
            ll x;
            cin >> type >> x;
            if (type == 0)
            {
                s += even * x;
                if (x % 2)
                {
                    odd += even;
                    even = 0;
                }
            }
            else
            {
                s += odd * x;
                if (x % 2)
                {
                    even += odd;
                    odd = 0;
                }
            }
            cout << s << '\n';
        }
    }
}