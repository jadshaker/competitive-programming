#include <stdio.h>

int main()
{
    for (int c = 1; c <= 1000; c++)
        for (int b = 1; b <= c; b++)
            for (int a = 1; a <= b; a++)
                if (a + b + c == 1000 && a * a + b * b == c * c)
                {
                    printf("%d\n", c * b * a);
                    return 0;
                }
}