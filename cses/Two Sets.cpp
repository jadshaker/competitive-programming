#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    if (!(n % 4))
    {
        cout << "YES" << '\n' << n / 2 << '\n';
        for (int i = 0; i < n - 3; i += 4)
            cout << i + 1 << ' ' << i + 4 << ' ';
        cout << '\n' << n / 2 << '\n';
        for (int i = 0; i < n; i += 4)
            cout << i + 2 << ' ' << i + 3 << ' ';
        cout << '\n';
    }
    else if (n % 4 == 3)
    {
        cout << "YES" << '\n' << n / 2 << '\n';
        for (int i = 0; i < n / 4; i++)
            cout << i + 1 << ' ' << 3 * n / 4 + 1 + i << ' ';
        cout << n << '\n' << n / 2 + 1 << '\n';
        for (int i = n / 4 + 1; i < 3 * n / 4 + 1; i++)
            cout << i << ' ';
        cout << '\n';
    }
    else
        cout << "NO\n";
}