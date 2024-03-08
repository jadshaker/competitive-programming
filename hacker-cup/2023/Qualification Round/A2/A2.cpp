#include <fstream>
using namespace std;

typedef long long ll;

ifstream cin("cheeseburger_corollary_2_input.txt");
ofstream cout("cheeseburger_corollary_2_output.txt");

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        ll a, b, c, ans = 0;
        cin >> a >> b >> c;
        if (2 * a <= b)
        {
            ans += c / a;
        }
        else
        {
            ans += 2 * (c / b);
            if (c / b) ans--;
            c -= b * (c / b);
            if (ans && c / a) ans++;
            ans += c / a;
        }
        cout << "Case #" << t << ": " << ans << '\n';
    }
}