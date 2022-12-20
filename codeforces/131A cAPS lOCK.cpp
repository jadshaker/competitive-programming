#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool first = s[0] - 'A' >= 0 && s[0] - 'A' < 26, allCapital = true;
    for (int i = 1; i < s.length(); i++)
        if (!(s[i] - 'A' >= 0 && s[i] - 'A' < 26))
            {
                allCapital = false;
                break;
            }
    if (allCapital)
    {
        cout << (first ? char(s[0] - 'A' + 'a') : char(s[0] - 'a' + 'A'));
        for (int i = 1; i < s.length(); i++)
            cout << char(s[i] - 'A' + 'a');
    }
    else cout << s;
    cout << '\n';
}