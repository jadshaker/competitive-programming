#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int a, b, c, count, best = 0;
    for (int i = -999; i < 1000; i++)
    {
        for (int j = -1000; j <= 1000; j++)
        {
            if (!is_prime(j))
                continue;
            count = 0;
            int n = 0;
            while (is_prime(n * n + i * n + j))
            {
                count++;
                n++;
            }
            if (count > best)
            {
                best = count;
                a = i;
                b = j;
            }
        }
    }
    cout << a * b << endl;
}