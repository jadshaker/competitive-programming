#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve()
{
    int n, count, res = 0;
    char c;
    cin >> n >> c;
    char s[n * 2];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        s[n + i] = s[i];
    }
    if (c == 'g') return 0;
    for (int i = 0; i < n; i++)
        if (s[i] == c)
        {
            count = 0;
            while (s[i] != 'g') count++, i++;
            res = max(count, res);
        }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << '\n';
}