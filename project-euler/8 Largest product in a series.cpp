#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll p = 1, ans = 1;
    string s, temp;
    cin >> temp;
    while (temp != "end")
    {
        s += temp;
        cin >> temp;
    }
    for (int i = 0; i < 13; i++)
    {
        p *= s[i] - '0';
    }
    ans = p;
    for (int i = 13; i < s.size(); i++)
    {
        p = 1;
        for (int j = i; j < i + 13; j++) p *= s[j] - '0';
        ans = max(p, ans);
    }
    cout << ans << '\n';
}