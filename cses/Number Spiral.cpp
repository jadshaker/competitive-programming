#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (x > y)
        {
            if (x % 2)
                cout << (x - 1) * (x - 1) + y << '\n';
            else
                cout << x * x - y + 1 << '\n';
        }
        else
        {
            if (y % 2)
                cout << y * y - x + 1 << '\n';
            else
                cout << (y - 1) * (y - 1) + x << '\n';
        }
    }
}