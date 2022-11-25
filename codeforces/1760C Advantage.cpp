#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m_i;
        cin >> n;
        ll m = 0, m2 = 0;
        vector<ll> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] > m)
                m = s[i], m_i = i;
        }
        for (int i = 0; i < n; i++)
            if (i != m_i)
                m2 = max(m2, s[i]);
        for (int i = 0; i < n; i++)
            cout << s[i] - (i != m_i ? m : m2) << ' ';
        cout << '\n';
    }
}