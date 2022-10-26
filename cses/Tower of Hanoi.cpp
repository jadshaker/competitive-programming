#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int power(int n, int p)
{
    int m = 1;
    for (int i = 1; i <= p; i++)
        m *= n;
    return m;
}

int hanoi(int n, int i, int j, int middle)
{
    if (n == 1)
    {
        cout << i << ' ' << j << '\n';
        return 1;
    }
    return hanoi(n - 1, i, middle, j) + hanoi(1, i, j, middle) + hanoi(n - 1, middle, j, i);
}

int main()
{
    int n;
    cin >> n;
    cout << power(2, n) - 1 << '\n';
    hanoi(n, 1, 3, 2);
}