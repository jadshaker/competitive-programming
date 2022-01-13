#include <stdio.h>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    for (int i = 100; i < 1000; i++)
        for (int j = i; j < 1000; j++)
        {
            int p = i * j;
            if (p < n)
                continue;
            string x = to_string(p);
            if (x.length() == 4)
            {
                if (x[0] == x[3] && x[1] == x[2])
                    n = p;
            }
            else if (x.length() == 6)
            {
                if (x[0] == x[5] && x[1] == x[4] && x[2] == x[3])
                    n = p;
            }
        }
    printf("%d", n);
}