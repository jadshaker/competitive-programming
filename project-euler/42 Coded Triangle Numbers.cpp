#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    int count = 0;
    string s;
    ifstream inFile;
    vector<int> triangle_numbers;
    for (int i = 1; i < 25; i++)
        triangle_numbers.push_back((i * i + i) / 2);

    inFile.open("42 Coded Triangle Numbers");
    inFile >> s;
    inFile.close();

    for (int i = 1; i < s.length(); i += 3)
    {
        int sum = 0;
        string name = "";
        while (s[i] != '"')
            name += s[i++];

        for (int j = 0; j < name.length(); j++)
            sum += name[j] - 64;

        if (find(triangle_numbers.begin(), triangle_numbers.end(), sum) != triangle_numbers.end())
            count++;
    }
    cout << count << endl;
}