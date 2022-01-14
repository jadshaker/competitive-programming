#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sum = 0;
    for (int i = 10; i < 1000000; i++)
    {
        int temp_sum = 0;
        for (auto c : to_string(i))
            temp_sum += pow(c - '0', 5);
        if (temp_sum == i)
            sum += i;
    }
    cout << sum << endl;
}