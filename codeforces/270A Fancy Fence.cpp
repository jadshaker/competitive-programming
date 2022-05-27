#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double a;
        cin >> a;
        cout << ((360 / (180 - a) == (int)(360 / (180 - a))) ? "YES" : "NO") << endl;
    }
}