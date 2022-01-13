#include <iostream>
using namespace std;

int main()
{
    int x = 1, y = 2, z = 3, n = 2;
    while (n <= 4000000)
    {
        x = y + z;
        y = x + z;
        z = x + y;
        n += y;
    }
    cout << n << endl;
}