#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m = 2 * n;
        if (!(n % 2))
        {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
        for (int i = 1; i <= n; i += 2)
            cout << i << ' ' << m-- << endl;
        for (int i = 2; i < n; i += 2)
            cout << i << ' ' << m-- << endl;
    }
}