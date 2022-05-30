#include <iostream>
using namespace std;

string solve()
{
    int n;
    bool alpha[26] = {false};
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        if (alpha[s[i] - 'A'] == false)
            alpha[s[i] - 'A'] = true;
        else
            return "NO";
        while (s[i] == s[i + 1] && i < n)
            i++;
    }
    return "YES";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;
}