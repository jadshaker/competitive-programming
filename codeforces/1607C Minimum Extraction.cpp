#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int ans = a[0];
        for (int i = 0; i < n - 1; i++)
            ans = max(ans, a[i + 1] - a[i]);
        cout << ans << endl;
    }
}