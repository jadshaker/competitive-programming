#include <iostream>
#include <algorithm>
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
    string s[] = {
        "1",
        "12",
        "123",
        "1234",
        "12345",
        "123456",
        "1234567",
        "12345678",
    };

    for (int i = 7654321; i >= 3; i -= 2)
        if (is_prime(i))
        {
            string n = to_string(i);
            sort(n.begin(), n.end());
            if (n == s[n.size() - 1])
            {
                cout << i << endl;
                break;
            }
        }
}