#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

bool equal(vector<array<int, 2>> a, vector<array<int, 2>> b, int n)
{
    for (int i = 0; i < n; i++)
        if (a[i][0] != b[i][0] || a[i][1] != b[i][1])
            return false;
    return true;
}

int main()
{
    int n;
    cin >> n;
    vector<array<int, 2>> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
        b[i][0] = a[i][0], b[i][1] = a[i][1];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < n; i++)
    {
        int c = b[i][0];
        b[i][0] = b[i][1], b[i][1] = c;
    }
    if (!equal(a, b, n))
        cout << "Happy Alex" << endl;
    else
        cout << "Poor Alex" << endl;
}