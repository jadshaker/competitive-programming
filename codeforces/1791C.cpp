#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int i = 0, j = n - 1, count = 0;
        while (i < j)
        {
            if ((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0')) count += 2, i++, j--;
            else break;
        }
        cout << n - count << '\n';
    }
}