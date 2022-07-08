#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, count = 0;
        cin >> a >> b >> c >> d;
        if (a == 1 && b == 1 && c == 1 && d == 1)
            cout << 2 << endl;
        else if (a == 0 && b == 0 && c == 0 && d == 0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
}