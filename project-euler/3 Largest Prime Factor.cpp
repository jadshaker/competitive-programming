#include <iostream>
using namespace std;

int main()
{
    long long int n = 600851475143, i = 2;
    while (i * i < n)
    {
        while (n % i == 0)
        {
            n /= i;
        }
        i++;
    }
    cout << n << endl;
}