#include <iostream>
#include <vector>
#include <map>
using namespace std;

int solution(vector<int> a, int n)
{
    int best_c = 0, c = 0;
    map<int, int> m;
    for (int i = 0; i < n; i++)
        if (++m[a[i]] > best_c)
            best_c = m[a[i]];
    if (best_c > m.size())
        c++;
    if (best_c > m.size() - 1)
        best_c = m.size() - 1;
    return best_c + c;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << solution(a, n) << endl;
    }
}