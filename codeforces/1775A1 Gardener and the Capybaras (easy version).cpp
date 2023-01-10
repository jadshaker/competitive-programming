#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length(), i;
        bool A = false;
        for (i = 1; i < n - 1; i++)
            if (s[i] == 'a')
            {
                A = true;
                break;
            }
        if (A)
        {
            for (int j = 0; j < i; j++) cout << s[j];
            cout << ' ' << s[i] << ' ';
            for (int j = i + 1; j < n; j++) cout << s[j];
            cout << '\n';
        }
        else
        {
            cout << s[0] << ' ';
            for (int j = 1; j < n - 1; j++) cout << s[j];
            cout << ' ' << s[n - 1] << '\n';
        }
    }
}