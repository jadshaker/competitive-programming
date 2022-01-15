#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int sum = 0;
    vector<int> v;
    for (int i = 1; i < 100; i++)
        for (int j = 100; j < 10000; j++)
        {
            int product = i * j;
            string s = to_string(i) + to_string(j) + to_string(product);
            sort(s.begin(), s.end());
            if (s == "123456789")
                v.push_back(product);
        }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < v.size(); i++)
        sum += v[i];
    cout << sum << endl;
}