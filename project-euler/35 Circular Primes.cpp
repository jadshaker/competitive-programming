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

int main()
{
    int count = 0;
    for (int i = 2; i < 1000000; i++)
        if (is_prime(i))
        {
            string nb = to_string(i);
            bool is_circular = true;
            for (int j = 1; j < nb.size() && is_circular; j++)
                if (!is_prime(stoi(nb.substr(j, nb.size() - 1) + nb.substr(0, j))))
                    is_circular = false;
            if (is_circular)
                count++;
        }
    cout << count << endl;
}