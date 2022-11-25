#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        for (int i = 0; i < n; i++)
            cout << s[i];
        for (int i = n - 1; i > -1; i--)
            cout << s[i];
        cout << '\n';
    }
}