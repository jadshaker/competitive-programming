#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n, m, l, cnt = 0;
    cin >> n >> m;
    vector<int> a(n), b(n);
    set<int> s;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n - 1; i > -1; i--)
    {
        s.insert(a[i]);
        b[i] = s.size();
    }
    for (int i = 0; i < m; i++)
    {
        cin >> l;
        cout << b[l - 1] << endl;
    }
}
