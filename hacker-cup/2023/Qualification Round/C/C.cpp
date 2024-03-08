#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

ifstream cin("two_apples_a_day_input.txt");
ofstream cout("two_apples_a_day_output.txt");

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int N, ans = 0;
        cin >> N;
        int n = 2 * N - 1;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        int weight = a[0] + a[n - 1], i_skip, j_skip;
        for (int i = 0, j = n - 1; i < j; i++, j--)
            if (weight != a[i] + a[j])
            {
                ans = -1;
                i_skip = i;
                j_skip = j;
                break;
            }
        if (!ans) ans = a[n - 1] + a[0] - a[n / 2];
        if (ans == -1)
        {
            ans = 0;
            weight = a[0] + a[n - 1];
            for (int i = 0, j = n - 1; i < j; i++, j--)
                if (i == i_skip) j++;
                else if (weight != a[i] + a[j])
                {
                    ans = -1;
                    break;
                }
            if (!ans) ans = a[n - 1] + a[1] - a[i_skip];
        }
        if (ans == -1)
        {
            ans = 0;
            weight = a[0] + a[n - 1];
            for (int i = 0, j = n - 1; i < j; i++, j--)
                if (j == j_skip) i--;
                else if (weight != a[i] + a[j])
                {
                    ans = -1;
                    break;
                }
            if (!ans) ans = a[n - 1] + a[1] - a[j_skip];
        }
        if (ans == -1)
        {
            ans = 0;
            weight = a[1] + a[n - 1];
            for (int i = 1, j = n - 1; i < j; i++, j--)
                if (weight != a[i] + a[j])
                {
                    ans = -1;
                    break;
                }
            if (!ans) ans = a[n - 1] + a[1] - a[0];
        }
        if (ans == -1)
        {
            ans = 0;
            weight = a[0] + a[n - 2];
            for (int i = 1, j = n - 2; i < j; i++, j--)
                if (weight != a[i] + a[j])
                {
                    ans = -1;
                    break;
                }
            if (!ans) ans = a[n - 2] + a[0] - a[n - 1];
        }
        if (ans < 0) ans = -1;
        cout << "Case #" << t << ": " << ans << '\n';
    }
}