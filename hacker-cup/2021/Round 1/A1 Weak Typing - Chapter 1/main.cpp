#include <fstream>
#include <vector>
using namespace std;

ifstream cin("weak_typing_chapter_1_input.txt");
ofstream cout("weak_typing_chapter_1_output.txt");

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cout << "Case #" << t << ": ";
        int n, moves = 0, i;
        char c = 'F';
        string s;
        cin >> n >> s;
        for (i = 0; i < n; i++)
            if (c != s[i])
            {
                c = s[i];
                break;
            }
        if (c == 'F')
        {
            cout << 0 << endl;
            continue;
        }
        for (; i < n; i++)
            if (c != s[i] && s[i] != 'F')
            {
                moves++;
                c = s[i];
            }
        cout << moves << endl;
    }
}