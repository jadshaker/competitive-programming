#include <bits/stdc++.h>
using namespace std;

bool solve(int n, vector <int>& a, string s)
{
    vector<char> c(51, '0');
    for (int i = 0; i < n; i++)
    {
        if (c[a[i]] == '0')
            c[a[i]] = s[i];
        else if (c[a[i]] != s[i])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cin >> s;
        cout << (solve(n, a, s) ? "YES" : "NO") << '\n';
    }
}