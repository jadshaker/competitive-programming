#include <stdio.h>

int main()
{
    int day = 1, month, year, month_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, count = 0;
    for (year = 1901; year < 2001; year++)
    {
        if (!(year % 4) || (!(year % 100) && !(year % 400)))
            month_days[1] = 29;
        else
            month_days[1] = 28;
        for (month = 0; month < 12; month++)
        {
            if ((day - 1) == 0)
                count++;
            day = (day + month_days[month]) % 7;
        }
    }
    printf("%d\n", count);
}