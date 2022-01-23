#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    vector<int> primes = {2};
    for (int i = 3; i < 1000000; i += 2)
        if (is_prime(i))
            primes.push_back(i);
    int best = 0, highest = 0;
    for (int i = 0; i < primes.size(); i++)
    {
        int sum = 0;
        for (int j = i; j < primes.size(); j++)
        {
            sum += primes[j];
            if (sum > 1000000)
                break;
            if (is_prime(sum) && j - i + 1 > best && sum > highest)
                best = j - i + 1, highest = sum;
        }
    }
    cout << highest << endl;
}