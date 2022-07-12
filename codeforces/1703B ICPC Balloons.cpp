#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, chars[26] = {0}, sm = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < s.length(); i++)
            if (chars[s[i] - 'A'])
                chars[s[i] - 'A']++;
            else
                chars[s[i] - 'A'] += 2;
        for (int i = 0; i < 26; i++)
            sm += chars[i];
        cout << sm << endl;
    }
}