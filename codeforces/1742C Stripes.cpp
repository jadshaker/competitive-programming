#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c = 'B';
        string s;
        vector<string> grid;
        for (int i = 0; i < 8; i++)
        {
            cin >> s;
            if (s == "RRRRRRRR")
                c = 'R';
        }
        cout << c << '\n';
    }
}