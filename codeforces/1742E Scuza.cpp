#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q, k;
        ll a;
        cin >> n >> q;
        vector<ll> s(n), m(n);
        cin >> a;
        s[0] = a;
        m[0] = a;
        for (int i = 1; i < n; i++)
        {
            cin >> a;
            s[i] = s[i - 1] + a;
            m[i] = max(m[i - 1], a);
        }
        for (int i = 0; i < q; i++)
        {
            cin >> k;
            vector<ll>::iterator lastStep = upper_bound(m.begin(), m.end(), k);
            lastStep--;
            if (lastStep - m.begin() == -1)
                cout << 0 << ' ';
            else
                cout << s[lastStep - m.begin()] << ' ';
        }
        cout << '\n';
    }
}