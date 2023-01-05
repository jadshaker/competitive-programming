#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (k == 1 || k == n)
        {
            for (int i = 1; i <= n; i++)
                cout << i << ' ';
            cout << '\n';
            continue;
        }
        int i = 1, j = n, c = 0;
        while (i <= j)
        {
            c = 0;
            while (c++ < k - 1 && i < j) 
                cout << j-- << ' ';
            if (i <= j)
                cout << i++ << ' ';
        }
        cout << '\n';
    }
}
