#include <iostream>
using namespace std;

int main()
{
    int sum = 1, x = 1, n = 1001;
    for (int i = 3; i <= n; i += 2)
        sum += (i * i - x++ * 3) * 4;
    cout << sum << endl;
}