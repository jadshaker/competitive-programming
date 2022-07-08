#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        cout << 2 << endl;
        cout << 1 << " ";
        for (i = 2; i <= n; i *= 2)
            cout << i << " ";
        for (i = 3; i <= n; i += 2)
        {
            cout << i << " ";
            int x = i * 2;
            while (x <= n)
            {
                cout << x << " ";
                x = x * 2;
            }
        }
        cout << endl;
    }
}