#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, a = 1, b = 1, s = 0, temp = 0;
    cin >> n;
    while (b < n)
    {
        if (b % 2 == 0) s += b;
        temp = b;
        b = a + b;
        a = temp;
    }
    cout << s << '\n';
}