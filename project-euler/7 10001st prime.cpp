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
    int n, i = 1, c = 0;
    cin >> n;
    while (c < n) if (isPrime(++i)) c++;
    cout << i << '\n';
}