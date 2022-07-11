#include <iostream>
using namespace std;

int main()
{
    int n, o = 0, z = 0;
    string s;
    cin >> n >> s;
    for (char c : s)
        if (c == 'n')
            o++;
        else if (c == 'z')
            z++;
    while (o--)
        cout << 1 << " ";
    while (z--)
        cout << 0 << " ";
}