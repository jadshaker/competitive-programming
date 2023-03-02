#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<int> x(5 * n);
    for (int i = 0; i < 5 * n; i++) cin >> x[i];
    sort(x.begin(), x.end());
    float s = 0;
    for (int i = n ; i < 4 * n; i++) s += x[i];
    cout << setprecision(10) << s / (3 * n) << '\n';
}