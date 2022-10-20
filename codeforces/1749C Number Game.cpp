#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve()
{
    int n, k = 1, best = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    while (k <= (n + 1) / 2)
    {
        int r = 1;
        for (int i = 0, j = n - 1; i <= j; j--)
            if (a[j] > k - r + 1);
            else i++, r++;
        best = r > k ? k : best;
        k++;
    }
    return best;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << '\n';
}