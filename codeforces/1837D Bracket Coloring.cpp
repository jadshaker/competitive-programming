#include <iostream>
using namespace std;

bool isBeautiful(string &s)
{
    int o = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(') o++;
        else if (o > 0) o--;
        else return false;
    }
    return o == 0;
}

bool isValid(string &s)
{
    int o = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '(') o++;
        else o--;
    return o == 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        if (!isValid(s))
        {
            cout << -1 << '\n';
            continue;
        }
        if (isBeautiful(s))
        {
            cout << 1 << '\n';
            for (int i = 0; i < n; i++) cout << 1 << ' ';
            cout << '\n';
        }
        else
        {
            reverse(s.begin(), s.end());
            if (isBeautiful(s))
            {
                cout << 1 << '\n';
                for (int i = 0; i < n; i++) cout << 1 << ' ';
                cout << '\n';
            }
            else
            {
                reverse(s.begin(), s.end());
                cout << 2 << '\n';
                int o = 0;
                bool pos = true;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == '(') o++;
                    else o--;
                    if (o > 0)
                    {
                        cout << 1 << ' ';
                        pos = true;
                    }
                    else if (o < 0)
                    {
                        cout << 2 << ' ';
                        pos = false;
                    }
                    else
                    {
                        if (pos) cout << 1 << ' ';
                        else cout << 2 << ' ' ;
                    }
                }
                cout << '\n';
            }
        }
    }
}