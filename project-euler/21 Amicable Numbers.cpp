#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int divisors_sum(int n)
{
    int sum = 1;
    for (int i = 2; i * i <= n; i++)
        if (!(n % i))
            sum += i + n / i;
    return sum;
}

int main()
{
    int sum = 0;
    vector<int> v(10000), a;
    v[0] = 0;
    v[1] = 0;
    for (int i = 2; i < 10000; i++)
        v[i] = divisors_sum(i);
    for (int i : v)
        if (i < 10000 && v[i] < 10000 && i != v[i] && v[v[i]] == i)
            a.push_back(i);
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    for (int i : a)
        sum += i;
    printf("%d\n", sum);
}