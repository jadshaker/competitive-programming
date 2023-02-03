#include <iostream>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'o' || c == 'r' || c == 'c' || c == 'e' || c == 's') cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}