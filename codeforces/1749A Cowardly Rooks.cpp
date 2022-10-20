#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool solve()
{
    int n, m, k;
    vector<int> x(8, 0), y(8, 0);
    cin >> n >> m;
    for (int i = 0; i < m; i++)
        cin >> x[i] >> y[i];
    if (n == m) return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << (solve() ? "YES" : "NO") << '\n';
}