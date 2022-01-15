#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

bool is_trunctable(int n)
{
    int len = to_string(n).length();
    for (int i = 1; i < len; i++)
    {
        if (!is_prime(stoi(to_string(n).substr(i))))
            return false;
        if (!is_prime(stoi(to_string(n).substr(0, len - i))))
            return false;
    }
    return true;
}

int main()
{
    int sum = 0, count = 0;
    for (int i = 23; count < 11; i++)
        if (is_prime(i) && is_trunctable(i))
            sum += i, count++;
    cout << sum << endl;
}