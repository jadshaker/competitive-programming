#include <iostream>
using namespace std;

#define lli long long int

int main()
{
    lli m, n, t = 1, sum = 0, a[n], b[m];
    cin >> n >> m;
    for (lli i = 0; i < n; i++)
        cin >> a[i + 1];

    for (lli i = 0; i < m; i++)
    {
        lli x;
        cin >> x;
        while (sum + a[t] < x)
            sum += a[t++];

        cout << t << " " << x - sum << endl;
    }
}