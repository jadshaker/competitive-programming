#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int rows = 15, max_number = 0;
    vector<int> v, parent = {0};
    for (int i = 0; i < rows; i++)
    {
        v = {};
        for (int j = 0; j < i + 1; j++)
        {
            int x;
            scanf("%d", &x);
            v.push_back(x);
        }
        v[0] += parent[0];
        if (i != 0)
            v[i] += parent[i - 1];
        for (int j = 1; j < i; j++)
            v[j] += max(parent[j - 1], parent[j]);
        parent = v;
    }
    for (int i = 0; i < rows; i++)
        max_number = max(max_number, parent[i]);
    printf("%d", max_number);
}