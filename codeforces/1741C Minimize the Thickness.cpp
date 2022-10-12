#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1000000007;

int thickness(int n, vector<int>& a, int s)
{
    int t = 0, current_th = 0;
    ll current_s = 0;
    for (int i = 0; i < n; i++)
    {
        current_s += a[i];
        current_th++;
        if (current_s == s)
        {
            current_s = 0, t = max(t, current_th);
            current_th = 0;
        }
        else if (current_s > s)
            return INF;
    }
    return t;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, th = INF;
        ll s = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        for (int i = 1; i * i <= s; i++)
        {
            if (s % i) continue;
            th = min(th, min(thickness(n, a, s / i), thickness(n, a, i)));
        }
        cout << th << '\n';
    }
}