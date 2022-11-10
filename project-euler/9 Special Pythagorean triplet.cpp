#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int pythagoreanTriplet(int n)
{
    for (int i = 1; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
                if (i * i + j * j == k * k)
                    if (i + j + k == n)
                        return i * j * k;
    return -1;
}

int main()
{
    int n;
    cin >> n;
    cout << pythagoreanTriplet(n) << '\n';
}