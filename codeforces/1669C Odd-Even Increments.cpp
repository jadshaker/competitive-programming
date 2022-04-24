#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, odd, even;
        string ans = "Yes";
        cin >> n >> x;
        even = x % 2;
        cin >> x;
        odd = x % 2;
        for (int i = 2; i < n; i++)
        {
            cin >> x;
            if (i % 2)
            {
                if (x % 2 != odd)
                    ans = "No";
            }
            else
            {
                if (x % 2 != even)
                    ans = "No";
            }
        }
        cout << ans << endl;
    }
}
