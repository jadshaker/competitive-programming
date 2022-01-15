#include <iostream>
using namespace std;

int main()
{
    string s = "";
    for (int i = 0; i < 1000000; i++)
        s += to_string(i);
    int x = (s[1] - '0') * (s[10] - '0') * (s[100] - '0') * (s[1000] - '0') *
            (s[10000] - '0') * (s[100000] - '0') * (s[1000000] - '0');
    cout << x << endl;
}