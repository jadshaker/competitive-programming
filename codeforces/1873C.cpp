#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int ans = 0;
        vector<vector<int> > v(10, vector<int>(10));
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
            {
                v[i][j] = min(i, j) + 1;
                v[i][10 - j - 1] = min(i, j) + 1;
                v[10 - i - 1][j] = min(i, j) + 1;
                v[10 - i - 1][10 - j - 1] = min(i, j) + 1;
            }
        char c;
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
            {
                cin >> c;
                if (c == '.') continue;
                ans += v[i][j];
            }
        cout << ans << '\n';
    }
}