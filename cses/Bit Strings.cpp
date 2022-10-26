#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int MOD =  1000000007;

int main()
{
    int n, p = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
        p = p * 2 % MOD;
    cout << p << '\n';
}