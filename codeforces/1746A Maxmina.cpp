#include <iostream>
using namespace std;

bool solve()
{
    int n, k, a;
    bool ok = false;
    cin >> n >> k;
    while (n--)
    {
        cin >> a;
        if (a == 1)
            ok = true;
    }
    return ok;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        cout << (solve() ? "YES" : "NO") << '\n';
}