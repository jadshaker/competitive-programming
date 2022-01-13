#include <stdio.h>

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int i = 1, x = 3;
    while (i < 10000)
    {
        x += 2;
        if (is_prime(x))
            i++;
    }
    printf("%d", x);
}