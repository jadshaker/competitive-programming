#include <stdio.h>

int main()
{
    long long int n, count, best = 0, best_nb;
    for (int i = 1; i <= 1000000; i++)
    {
        n = i, count = 1;
        while (n != 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else
                n = 3 * n + 1;
            count++;
        }
        if (count > best)
        {
            best = count;
            best_nb = i;
        }
    }
    printf("\n%d\n", best_nb);
}
