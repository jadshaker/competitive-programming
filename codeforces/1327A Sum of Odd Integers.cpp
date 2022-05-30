#include <iostream>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k * k <= n && n % 2 == k % 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}