#include <iostream>
#include <vector>
using namespace std;

string to_binary(int x, int n)
{
    string s;
    while (x > 0)
    {
        s = (char)(x % 2 + '0') + s;
        x /= 2;
    }
    while (s.length() < n)
        s = "0" + s;
    return s;
}

int main()
{
    int n, m, k, temp, friends = 0;
    string f;
    cin >> n >> m >> k;
    vector<string> x(m);
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        x[i] = to_binary(temp, n);
    }
    cin >> temp;
    f = to_binary(temp, n);
    for (int i = 0; i < m; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (x[i][j] != f[j])
                c++;
        }
        if (c <= k)
            friends++;
    }
    cout << friends << endl;
}