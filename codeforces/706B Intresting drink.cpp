#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define ll long long
#define MAX 100000

int main()
{
    ll n, q, m, l = 0;
    ll x[MAX] = {0};
    cin >> n;
    vector<ll> a(n, 0);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for (ll i = 0; i < MAX; i++)
    {
        while (i >= a[l] && l < n)
            l++;
        x[i] = l;
    }
    cin >> q;
    for (ll i = 0; i < q; i++)
    {
        cin >> m;
        if (m > MAX)
            cout << n << endl;
        else
            cout << min(n, x[m]) << endl;
    }
}