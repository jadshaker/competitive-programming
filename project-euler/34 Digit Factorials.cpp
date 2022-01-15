#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main()
{
    int sum = 0;
    for (int i = 3; i < 1000000; i++)
    {
        int s = 0;
        string nb = to_string(i);
        for (char c : nb)
            s += factorial(c - '0');
        if (s == i)
            sum += i;
    }
    cout << sum << endl;
}