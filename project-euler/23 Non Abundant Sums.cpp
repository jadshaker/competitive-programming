#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int is_abundant_number(int n)
{
    int sum = 1, i;
    for (i = 2; i * i <= n; i++)
        if (!(n % i))
            sum += i + n / i;

    if (--i * i == n)
        sum -= i;

    return sum > n;
}

int main()
{
    long long int s = 0;
    vector<int> v, numbers = {0};
    for (int i = 1; i < 28123; i++)
    {
        if (is_abundant_number(i))
            v.push_back(i);
        numbers.push_back(i);
    }
    for (int i = 0; i < v.size(); i++)
        for (int j = i; j < v.size(); j++)
        {
            int sum = v[i] + v[j];
            if (sum < 28123)
                numbers[sum] = 0;
        }
    for (auto number : numbers)
        if (number)
            s += number;
    cout << s << endl;
}