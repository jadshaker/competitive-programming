#include <iostream>
#include <cmath>
using namespace std;

bool is_pentagon(int n)
{
    double x = (sqrt(24 * n + 1) + 1) / 6;
    return x == (int)x;
}

int main()
{
    int i = 1;
    while (i++)
    {
        int n = i * (3 * i - 1) / 2;
        for (int j = i - 1; j > 0; j--)
        {
            int m = j * (3 * j - 1) / 2;
            if (is_pentagon(n + m) && is_pentagon(n - m))
            {
                cout << n - m << endl;
                return 0;
            }
        }
    }
}