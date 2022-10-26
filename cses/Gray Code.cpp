#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<int> p(16, 0);
    p[0] = 1;
    for (int i = 1; i <= 16; i++)
        p[i] = p[i - 1] * 2;
    for (int i = 0; i < p[n]; i++)
    {
        for (int j = n - 1; j > -1; j--)
            if (p[j] > i) cout << 0;
            else cout << (((i - p[j]) / p[j + 1]) % 2 == 0);
        cout << '\n';
    }
}