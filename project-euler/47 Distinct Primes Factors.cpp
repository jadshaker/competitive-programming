#include <iostream>
#include <set>
using namespace std;

int prime_factors(int n)
{
    set<int> factors;
    while (n % 2 == 0)
    {
        n /= 2;
        factors.insert(2);
    }
    for (int i = 3; i * i <= n; i += 2)
        while (n % i == 0)
        {
            n /= i;
            factors.insert(i);
        }
    if (n > 2)
        factors.insert(n);
    return factors.size();
}

int main()
{
    int i = 2;
    while (i++)
        if (prime_factors(i) == 4)
            if (prime_factors(i + 1) == 4)
                if (prime_factors(i + 2) == 4)
                    if (prime_factors(i + 3) == 4)
                    {
                        cout << i << endl;
                        break;
                    }
}