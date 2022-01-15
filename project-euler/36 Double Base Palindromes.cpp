#include <iostream>
#include <string>
using namespace std;

string to_binary(int n)
{
    string nb = "";
    while (n > 0)
    {
        nb = (n % 2 == 0 ? "0" : "1") + nb;
        n /= 2;
    }
    return nb;
}

bool is_palindrome(string nb)
{
    int i = 0;
    int j = nb.length() - 1;
    while (i < j)
    {
        if (nb[i] != nb[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    int sum = 0;
    for (int i = 0; i < 1000000; i++)
        if (is_palindrome(to_string(i)) && is_palindrome(to_binary(i)))
            sum += i;
    cout << sum << endl;
}