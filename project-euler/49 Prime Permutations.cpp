#include <iostream>
using namespace std;

bool is_prime(int n)
{
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

bool is_permutation(int a, int b)
{
    int cnt[10] = {0};
    while (a)
    {
        cnt[a % 10]++;
        a /= 10;
    }
    while (b)
    {
        cnt[b % 10]--;
        b /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (cnt[i] != 0)
            return false;
    return true;
}

int main()
{
    for (int i = 1489; i < 3340; i += 2)
        if (is_prime(i))
            if (is_prime(i + 3330))
                if (is_prime(i + 6660))
                    if (is_permutation(i, i + 3330))
                        if (is_permutation(i, i + 6660))
                        {
                            cout << i << i + 3330 << i + 6660 << endl;
                            return 0;
                        }
}