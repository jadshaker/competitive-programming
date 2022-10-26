#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    bool odd = n % 2, ok = true;
    vector<int> a(26, 0);
    char c, middle = '0';
    for (int i = 0; i < n; i++)
        a[s[i] - 'A']++;
    if (!odd)
    {
        for (int i = 0; i < 26; i++)
            if (a[i] % 2)
            {
                ok = false;
                break;
            }
    }
    else
    {
        for (int i = 0; i < 26; i++)
            if (a[i] % 2)
            {
                if (!odd)
                {
                    ok = false;
                    break;
                }
                odd = false;
                middle = 'A' + i;
            }
    }
    if (!ok)
        cout << "NO SOLUTION";
    else
    {
        for (int i = 0; i < 26; i++)
            for (int j = 0; j < a[i] / 2; j++)
                cout << char(i + 'A');
        if (middle != '0') cout << middle;
        for (int i = 25; i > -1; i--)
            for (int j = 0; j < a[i] / 2; j++)
                cout << (char)(i + 'A');
    }
    cout << '\n';
}