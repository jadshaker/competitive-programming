#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int sum = 0, r = 0;
    string total = "";
    vector<string> v(100);
    for (int i = 0; i < 100; i++)
        cin >> v[i];

    for (int j = 49; j >= 1; j--)
    {
        sum = r;
        for (int i = 0; i < 100; i++)
            sum += v[i][j] - '0';
        r = sum / 10;
        total = to_string(sum)[2] + total;
    }

    sum = r;
    for (int i = 0; i < 100; i++)
        sum += v[i][0] - '0';

    total = to_string(sum) + total;
    cout << total.substr(0, 10) << endl;
}