#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool uniqueVector(int n, vector<ll>& a)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] == a[j])
                return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << (uniqueVector(n, a) ? "YES" : "NO") << '\n';
    }
}