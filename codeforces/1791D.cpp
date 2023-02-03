#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a[26] = {0}, b[26] = {0}, count_a = 1, count_b = 0, max_sum = 0;
        string s;
        cin >> n >> s;
        a[s[0] - 'a']++;
        for (int i = 1; i < n; i++)
        {
            if (!b[s[i] - 'a']) count_b++;
            b[s[i] - 'a']++;
        }
        max_sum = count_a + count_b;
        for (int i = 1; i < n - 1; i++)
        {
            if (!a[s[i] - 'a']) count_a++;
            a[s[i] - 'a']++;
            b[s[i] - 'a']--;
            if (!b[s[i] - 'a']) count_b--;
            max_sum = max(max_sum, count_a + count_b);
        }
        cout << max_sum << '\n';
    }
}
