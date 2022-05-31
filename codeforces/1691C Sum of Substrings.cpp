#include <iostream>
#include <vector>
using namespace std;

int _sum(vector<int> a, int n, int count)
{
    if (n == 2)
        return a[0] * 10 + a[1];
    return a[0] * 10 + a[n - 1] + count * 11;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, f = -1, l, temp, count = 0;
        string s;
        cin >> n >> k >> s;
        int _k = k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = s[i] - '0';
            if (a[i] == 1)
            {
                count++;
                if (f == -1)
                    f = i;
                l = i;
            }
        }
        if (f == -1)
        {
            cout << 0 << endl;
            continue;
        }
        if (l == n - 1)
            count--;
        else if (k >= n - l - 1 && count > 0)
            a[l] = 0, a[n - 1] = 1, k += -n + l + 1, count--;
        if (f == 0)
            count--;
        else if (k > f - 1 && count > 0)
            a[f] = 0, a[0] = 1, count--;
        if (_sum(a, n, count) == -10)
            cout << 1 << endl;
        else
            cout << _sum(a, n, count) << endl;
    }
}