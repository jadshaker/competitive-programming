#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        string s;
        cin >> n >> a >> b >> s;
        int x = unique(s.begin(), s.end()) - s.begin();
        int ans = n * a + max(n * b, (x / 2 + 1) * b);
        cout << ans << endl;
    }
}