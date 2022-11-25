#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2)
            for (int i = 0; i < n; i++)
                cout << n << ' ';
        else
        {
            for (int i = 0; i < n - 2; i++)
                cout << n + 1 << ' ';
            cout << n + 1 << ' ' << 1;
        }
        cout << '\n';
    }
}