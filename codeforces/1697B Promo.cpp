#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

#define ll long long

int main()
{
    int n, q;
    cin >> n >> q;
    vector<ll> p(n);
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p.rbegin(), p.rend());
    partial_sum(p.begin(), p.end(), p.begin());
    while (q--)
    {
        ll x, y, s = 0;
        cin >> x >> y;
        cout << p[x - 1] - (x - y ? p[x - y - 1] : 0) << endl;
    }
}