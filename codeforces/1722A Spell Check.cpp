#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        string s, t = "Timur";
        cin >> n >> s;
        if (s.length() != 5)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                if (t[i] == s[j])
                {
                    count++;
                    break;
                }
        if (count == 5)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}