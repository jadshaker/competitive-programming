#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c1 = 0, c2, k = -1;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            c1 += a[i] == 2;
            c2 = 0;
            for (int j = i + 1; j < n; j++) c2 += a[j] == 2;
            if (c1 == c2)
            {
                k = i + 1;
                break;
            }
        }
        cout << k << '\n';
    }
}