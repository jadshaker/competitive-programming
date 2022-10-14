#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<bool> b(n);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> m;
        b[m - 1] = true;
    }
    for (int i = 0; i < n; i++)
    {
        if (!b[i]) {
            cout << i + 1 << '\n';
            break;
        }
    }
}