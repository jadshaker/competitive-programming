#include <stdio.h>
using namespace std;

int main()
{
    long long int n, sum_of_squares = 0, sum = 0;
    scanf("%lld", &n);
    for (int i = 1; i < n; i++)
    {
        sum_of_squares += i * i;
        sum += i;
    }
    printf("%lld", sum * sum - sum_of_squares);
}