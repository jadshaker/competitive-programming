#include <fstream>
using namespace std;

typedef long long ll;

ifstream cin("dim_sum_delivery_input.txt");
ofstream cout("dim_sum_delivery_output.txt");

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int r, c, a, b;
        cin >> r >> c >> a >> b;
        if (r > c) cout << "Case #" << t << ": YES" << '\n';
        else cout << "Case #" << t << ": NO" << '\n';
    }
}