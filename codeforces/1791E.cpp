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
        bool odd = false;
        cin >> n;
        ll s = 0, a, minimum = 1000000001;
        while (n--)
        {
            cin >> a;
            if (a < 0) odd = !odd, s -= a;
            else s += a;
            minimum = min(abs(a), minimum);
        }
        if (odd) s -= 2 * minimum;
        cout << s << '\n';
    }
}
