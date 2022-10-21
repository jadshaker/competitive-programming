#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string solve()
{
    int n;
    char c;
    string s, res = "";
    cin >> n >> s;
    for (int i = n - 1; i > -1; i--)
        if (s[i] == '0')
            res = (char)((s[i - 2] - '0') * 10 + s[i - 1] - '0' + 'a' - 1) + res, i -= 2;
        else
            res = (char)(s[i] - '0' + 'a' - 1) + res;
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << '\n';
}