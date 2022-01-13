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
    long long int s = 0;
    for (int i = 2; i <= 2000000; i++)
        if (is_prime(i))
            s += i;
    printf("%lld\n", s);
}