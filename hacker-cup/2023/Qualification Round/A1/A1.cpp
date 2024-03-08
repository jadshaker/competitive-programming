#include <fstream>
using namespace std;

ifstream cin("cheeseburger_corollary_1_input.txt");
ofstream cout("cheeseburger_corollary_1_output.txt");

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int s, d, k;
        cin >> s >> d >> k;
        if (s + d * 2 >= k && 2 * s + 2 * d >= k + 1)
            cout << "Case #" << t << ": YES" << '\n';
        else cout << "Case #" << t << ": NO" << '\n';
    }
}