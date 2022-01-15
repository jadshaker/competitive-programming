#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int best = 0;
    for (int i = 2; i < 10000; i++)
        for (int j = 2; j < 10; j++)
        {
            string concat = "";
            for (int k = 1; k <= j; k++)
                concat += to_string(i * k);
            if (concat.length() != 9)
                continue;
            int n = stoi(concat);
            sort(concat.begin(), concat.end());
            if (concat == "123456789" && n > best)
                best = n;
        }
    cout << best << endl;
}