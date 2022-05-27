#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k, s = 0, b, index;
    cin >> n >> k;
    vector<int> h(n);
    for (int i = 0; i < n && i != k; i++)
    {
        cin >> h[i];
        s += h[i];
    }
    b = s, index = 1;
    for (int i = k; i < n; i++)
    {
        cin >> h[i];
        s += h[i] - h[i - k];
        if (s < b)
            b = s, index = i + 2 - k;
    }
    cout << index << endl;
}