#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, c = 0, x;
    cin >> n >> x;
    ll p = x;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        if (x < p) c += p - x;
        p = x < p ? p : x;
    }
    cout << c << '\n';
}