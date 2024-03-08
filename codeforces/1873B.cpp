#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, index = 0, p = 1;
        cin >> n;
        vector<int> a(n);
        cin >> a[0];
        x = a[0];
        for (int i = 1; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < x) x = a[i], index = i;
        }
        for (int i = 0; i < n; i++)
            if (i != index) p *= a[i];
            else p *= a[i] + 1;
        cout << p << '\n';
    }
}