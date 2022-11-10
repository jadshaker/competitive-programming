#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(int n)
{
    if (n < 2) return false;
    if (n < 4) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int main()
{
    int n;
    ll s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        if (isPrime(i)) s += i;
    cout << s << '\n';
}