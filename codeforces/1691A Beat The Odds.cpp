#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0, even = 0, x;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        cout << (odd > even ? even : odd) << endl;
    }
}