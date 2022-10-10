// #include <fstream>
#include <iostream>
#include <vector>
using namespace std;

// ifstream cin("weak_typing_chapter_2_sample_input.txt");
// ofstream cout("weak_typing_chapter_2_sample_output.txt");

bool has_char(string s, char c, int n)
{
    for (int i = 0; i < n; i++)
        if (s[i] == c)
            return true;
    return false;
}

char first_char(string s, int n)
{
    for (int i = 0; i < n; i++)
        if (s[i] != 'F')
            return s[i];
    return 'F';
}

char last_char(string s, int n)
{
    for (int i = n - 1; i > -1; i--)
        if (s[i] != 'F')
            return s[i];
    return 'F';
}

int moves(string s, int n)
{
    int i, moves = 0;
    char c = 'F';
    for (i = 0; i < n; i++)
        if (c != s[i])
        {
            c = s[i];
            break;
        }
    if (c == 'F')
        return 0;
    for (; i < n; i++)
        if (c != s[i] && s[i] != 'F')
        {
            moves++;
            c = s[i];
        }
    return moves;
}

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        // cout << "Case #" << t << ": ";
        int n, s = 0;
        string str, substr;
        cin >> n >> str;
        vector<int> a(n);
        if (!(has_char(str, 'O', n) && has_char(str, 'X', n)))
        {
            cout << "Case #" << t << ": ";
            cout << 0 << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
            a[i] = moves(str.substr(0, i + 1), i + 1);
        for (int i = 0; i < n; i++)
            for (int j = i; j < n; j++)
            {
                substr = str.substr(i, j - i + 1);
                if (first_char(substr, j - i + 1) == 'F' ||
                    last_char(substr, j - i + 1) == 'F' ||
                    first_char(substr, j - i + 1) == last_char(substr, j - i + 1))
                {
                    s += a[i] - a[j - i];
                    continue;
                }
                else
                {
                    s += a[i] - a[j - i] + 1;
                }
            }
        cout << "Case #" << t << ": ";
        cout << s << endl;
    }
}