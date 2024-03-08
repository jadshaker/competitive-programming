#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans = 0;
        string s;
        cin >> n >> k >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'W') continue;
            ans++;
            i += k - 1;
        }
        cout << ans << '\n';
    }
}