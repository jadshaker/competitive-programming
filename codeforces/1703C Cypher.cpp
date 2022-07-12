#include <iostream>
#include <vector>
using namespace std;

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
        {
            cin >> a[i];
            a[i] = a[i] + 10;
        }
        for (int i = 0; i < n; i++)
        {
            int b;
            string s;
            cin >> b >> s;
            for (char c : s)
                if (c == 'U')
                    a[i]--;
                else
                    a[i]++;
            cout << a[i] % 10 << " ";
        }
        cout << endl;
    }
}