#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double product = 1;
    for (int i = 10; i < 100; i++)
        for (int j = i + 1; j < 100; j++)
        {
            double a = i, b = j;
            string q = to_string(a / b);
            int common = 0;
            if (i % 10 == j % 10)
                a = int(a / 10), b = int(b / 10), common = i % 10;
            else if (i / 10 == j % 10)
                a = int(a) % 10, b = int(b / 10), common = i / 10;
            else if (i % 10 == j / 10)
                a = int(a / 10), b = int(b) % 10, common = i % 10;
            else if (i / 10 == j / 10)
                a = int(a) % 10, b = int(b) % 10, common = i / 10;
            else
                continue;
            if (common && to_string(a / b) == q)
                product *= a / b;
        }
    // using the calculator find the simplified fraction
    cout << product << endl;
}