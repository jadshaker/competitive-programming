#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, i = 3;
    cin >> n;
    ll d = n;
    while (n % 2 == 0) n /= 2, d = 2;
    while (n > 1)
    {
        while (n % i == 0) n /= i, d = i;
        i += 2;
    }
    cout << d << '\n';
}