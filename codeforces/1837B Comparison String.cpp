#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, m = 0;
        char c1, c2;
        cin >> n;
        while (n--)
        {
            cin >> c1;
            if (c1 == c2) c++;
            else
            {
                m = max(m, c);
                c = 1;
            }
            c2 = c1;
        }
        cout << max(m, c) + 1 << '\n';
    }
}
