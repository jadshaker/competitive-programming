#include <bits/stdc++.h>
using namespace std;

int solution(vector<int>& a)
{
    int c = 0;
    while (a.size() > 1)
    {
        int n = (int)a.size();
        vector<int> v;
        for (int i = 0; i < n; i += 2)
            {
                int d = a[i] - a[i + 1];
                if (abs(d) != 1)
                    return -1;
                else
                {
                    v.push_back(a[i] / 2 + (a[i] % 2 ? 1 : 0));
                    c += d == 1 ? 1 : 0;
                }
            }
        a = move(v);
    }
    return c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << solution(a) << '\n';
    }
}