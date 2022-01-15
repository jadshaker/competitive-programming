#include <iostream>
using namespace std;

int main()
{
    int p[1000] = {0}, best = 0, index;
    for (int i = 1; i <= 1000; i++)
        for (int a = 1; a < i; a++)
            for (int b = a + 1; b < i; b++)
                for (int c = b + 1; c < i; c++)
                    if (a * a + b * b == c * c)
                        if (a + b + c <= 1000)
                            p[a + b + c - 1]++;
    for (int i = 0; i < 1000; i++)
        if (p[i] > best)
            best = p[i], index = i + 1;
    cout << index << endl;
}