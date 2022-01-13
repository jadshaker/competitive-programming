#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> prime_factors(int n)
{
    vector<int> factors;
    while (n % 2 == 0)
    {
        factors.push_back(2);
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i = i + 2)
        while (n % i == 0)
        {
            factors.push_back(i);
            n = n / i;
        }
    if (factors.size() == 0)
        factors.push_back(n);
    return factors;
}

int main()
{
    long long int x, m = 1;
    vector<int> factors;
    factors.push_back(1);
    scanf("%lld", &x);
    for (int i = x; i >= 2; i--)
    {
        vector<int> new_factors = prime_factors(i), temp = factors;
        for (int j : new_factors)
            if (find(temp.begin(), temp.end(), j) == temp.end())
                factors.push_back(j);
            else
                temp.erase(find(temp.begin(), temp.end(), j));
    }
    for (int i : factors)
        m *= i;
    printf("%lld", m);
}