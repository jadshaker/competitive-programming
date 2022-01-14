#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;

int main()
{
    string s;
    vector<int> scores;
    vector<string> names;
    ifstream inFile;
    inFile.open("22 Names Scores");
    inFile >> s;
    inFile.close();
    for (int i = 1; i < s.length(); i += 3)
    {
        string name = "";
        while (s[i] != '"')
            name += s[i++];
        names.push_back(name);
    }
    sort(names.begin(), names.end());
    for (int i = 0; i < names.size(); i++)
    {
        int score = 0;
        for (int j = 0; j < names[i].length(); j++)
            score += names[i][j] - 'A' + 1;
        scores.push_back(score * (i + 1));
    }
    int sum = 0;
    for (int i = 0; i < scores.size(); i++)
        sum += scores[i];
    cout << sum << endl;
}