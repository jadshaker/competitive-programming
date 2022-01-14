#include <stdio.h>
#include <algorithm>
using namespace std;

int number_of_factors(int n)
{
    int count = 0;
    for (int i = 1; i * i <= n; i++)
        if (n % i == 0)
            count += 2;
    return count;
}

int main()
{
    int x = 0;
    for (int i = 1; number_of_factors(x) < 500; i++)
        x += i;
    printf("%d\n", x);
}