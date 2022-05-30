#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, l, r, k = 0;
    string s;
    cin >> s >> m;
    vector<int> a(s.length(), 0);
    for (int i = 1; i < s.length(); i++)
        if (s[i] == s[i - 1])
            a[i] = ++k;
        else
            a[i] = k;
    while (m--)
    {
        cin >> l >> r;
        cout << a[r - 1] - a[l - 1] << endl;
    }
}