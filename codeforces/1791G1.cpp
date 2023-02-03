#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, i;
        ll c;
        cin >> n >> c;
        vector<ll> a(n);
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += i + 1;
        }
        sort(a.begin(), a.end());
        i = 0;
        while (c >= a[i] && i < n)
        {
            c -= a[i++];
            count++;
        }
        cout << count << '\n';
    }
}
