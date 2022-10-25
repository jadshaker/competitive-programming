#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, x;
    cin >> n;
    ll s = n;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        s += i - x;
    }
    cout << s << '\n';
}