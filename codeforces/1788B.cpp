#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool b = true;
        string n, x = "", y = "";
        cin >> n;
        for (int i = n.size() - 1; i > -1; i--)
        {
            int a = n[i] - '0';
            if (a % 2 == 0) x = to_string(a / 2) + x, y = to_string(a / 2) + y;
            else if (b) x = to_string(a / 2 + 1) + x, y = to_string(a / 2) + y, b = !b;
            else x = to_string(a / 2) + x, y = to_string(a / 2 + 1) + y, b = !b;
        }
        while (x[0] == '0' && x.size() > 1) x = x.substr(1, x.size() - 1);
        while (y[0] == '0' && y.size() > 1) y = y.substr(1, y.size() - 1);
        cout << x << ' ' << y << '\n';
    }
}