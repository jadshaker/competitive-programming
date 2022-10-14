#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, s = -1;
        cin >> n;
        vector<int> a(n);
        map<int, int> last_index;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            last_index[a[i]] = i;
        }
        for (map<int, int>::iterator i = last_index.begin(); i != last_index.end(); i++)
            for (map<int, int>::iterator j = last_index.begin(); j != last_index.end(); j++)
            {
                if (gcd(i->first, j->first) == 1)
                    if (i->second + j->second > s)
                        s = i->second + j->second;
            }
        cout << (s == -1 ? -1 : s + 2) << '\n';
    }
}