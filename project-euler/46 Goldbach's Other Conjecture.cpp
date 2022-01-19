#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define lli long long int

bool is_prime(int n)
{
    if (!(n % 2))
        return false;
    for (int i = 3; i * i < n; i++)
        if (!(n % i))
            return false;
    return true;
}

bool is_twice_squared(int n)
{
    double square = sqrt(n / 2);
    return square == ((int)square);
}

int main()
{
    int i = 1;
    bool not_found = true;
    vector<int> primes = {2};
    for (int i = 3; i < 100000; i++)
        if (is_prime(i))
            primes.push_back(i);

    while (not_found)
    {
        i += 2;
        int j = 0;
        not_found = false;
        while (i >= primes[j])
            if (is_twice_squared(i - primes[j++]))
            {
                not_found = true;
                break;
            }
    }

    cout << i << endl;
}