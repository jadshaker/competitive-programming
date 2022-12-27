#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a;
        ll p = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            p *= a;
        }
        p += n - 1;
        cout << p * 2022 << '\n';
    }
}