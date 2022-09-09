#include <iostream>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s = 0, k = 0;
        string str;
        cin >> n >> str;
        for (int i = 0; i < n; i++)
            s += str[i] == 'L' ? i : n - i - 1;
        for (int i = 0; i < n / 2; i++)
        {
            if (str[i] == 'L')
            {
                k++, s += n - 2 * i - 1;
                cout << s << " ";
            }
            if (str[n - i - 1] == 'R')
            {
                k++, s += 2 * (n - i - 1) - n + 1;
                cout << s << " ";
            }
        }
        while (k++ < n)
            cout << s << " ";
        cout << endl;
    }
}
