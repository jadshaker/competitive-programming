#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (a[j] == 0)
            {
                while (i < j && a[i] == 0)
                    i++;
                if (i == j)
                    break;
                if (a[i++] == 1) c++;
            }
            j--;
        }
        cout << c << '\n';
    }
}