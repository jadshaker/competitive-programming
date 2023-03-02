#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] - 'a' < 0)
        {
            cout << i + 1 << '\n';
            return 0;
        }
}