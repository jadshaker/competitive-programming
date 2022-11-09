#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, s = 0;
    cin >> n;
    for (int i = 0; i < n; i += 3)
        s += i;
    for (int i = 0; i < n; i += 5)
        s += i;
    for (int i = 0; i < n; i += 15)
        s -= i;
    cout << s << '\n';
}