#include <iostream>
using namespace std;

#define lli long long int

int main()
{
    lli m, n, t = 1, sum = 0;
    cin >> n >> m;
    lli a[n], b[m];
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