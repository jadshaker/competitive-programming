#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int max_product = 0, p;
    vector<vector<int>> v(20, vector<int>(20));
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 20; j++)
            cin >> v[i][j];

    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 16; j++)
        {
            p = v[i][j] * v[i][j + 1] * v[i][j + 2] * v[i][j + 3];
            max_product = max(max_product, p);
        }

    for (int i = 0; i < 16; i++)
        for (int j = 0; j < 20; j++)
        {
            p = v[i][j] * v[i + 1][j] * v[i + 2][j] * v[i + 3][j];
            max_product = max(max_product, p);
        }

    for (int i = 0; i < 16; i++)
        for (int j = 0; j < 16; j++)
        {
            p = v[i][j] * v[i + 1][j + 1] * v[i + 2][j + 2] * v[i + 3][j + 3];
            max_product = max(max_product, p);
        }

    for (int i = 3; i < 20; i++)
        for (int j = 0; j < 16; j++)
        {
            p = v[i][j] * v[i - 1][j + 1] * v[i - 2][j + 2] * v[i - 3][j + 3];
            max_product = max(max_product, p);
        }

    cout << max_product << endl;
}