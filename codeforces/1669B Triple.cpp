#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = -1, x;
        cin >> n;
        vector<int> a(n + 1, 0);
        while (n--)
        {
            cin >> x;
            if (++a[x] == 3)
                ans = x;
        }
        cout << ans << endl;
    }
}
