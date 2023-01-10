#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        bool ans = false;
        cin >> n;
        map<int, int> P;
        map<int, vector<int>> M;
        for (int i = 0; i < n; i++)
        {
            cin >> k;
            while (k--)
            {
                cin >> x;
                P[x]++;
                M[i].push_back(x);
            }
        }
        for (int i = 0; i < n; i++)
        {
            int j, m = M[i].size();
            for (j = 0; j < m; j++)
                if (P[M[i][j]] == 1)
                {
                    j = -1;
                    break;
                }
            if (j != -1)
            {
                ans = true;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << '\n';
    }
}