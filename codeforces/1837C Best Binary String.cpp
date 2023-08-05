#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = 0, n = s.length();
        while (s[i] == '?') i++;
        char c = s[i];
        if (i == n)
        {
            for (int i = 0; i < n; i++) cout << 0;
            cout << '\n';
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                cout << c;
            else
            {
                cout << s[i];
                c = s[i];
            }
        }
        cout << '\n';
    }
}