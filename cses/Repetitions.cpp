#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0, i = 0, best = 0;
    string s;
    cin >> s;
    int n = s.length();
    char c = s[0];
    while (true)
    {
        if (i == n) break;
        if (s[i] == c) count++;
        else
        {
            best = max(best, count);
            c = s[i];
            count = 1;
        }
        i++;
    }
    best = max(best, count);
    cout << best << '\n';
}