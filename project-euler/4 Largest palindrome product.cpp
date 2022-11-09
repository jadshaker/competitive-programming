#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isNumberPalindrome(int n)
{
    string s = to_string(n);
    for (int i = 0; i < s.length() / 2; i++)
        if (s[i] != s[s.length() - 1 - i])
            return false;
    return true;
}

int maxNumberPalindrome(int n)
{
    int m = 0;
    for (int i = n; i > 0; i--)
        for (int j = i; j > 0; j--)
            if (isNumberPalindrome(i * j))
                m = max(m, i * j);
    return m;
}

int main()
{
    int n;
    cin >> n;
    cout << maxNumberPalindrome(n) << '\n';
}