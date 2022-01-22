#include <iostream>
using namespace std;

#define ll long long
#define MOD 10000000000

int main()
{
    ll s = 0;
    for (int i = 1; i < 1001; i++)
    {
        ll c = 1;
        for (int j = 0; j < i; j++)
            c = c * i % MOD;
        s = (s + c) % MOD;
    }
    cout << s << endl;
}
