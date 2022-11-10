#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    ll s1 = 0, s2 = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        s1 += i * i, s2 += i;
    s2 = s2 * s2;
    cout << s2 - s1 << '\n';
}