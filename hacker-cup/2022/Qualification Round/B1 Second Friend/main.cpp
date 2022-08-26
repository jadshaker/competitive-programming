#include <fstream>
#include <vector>
using namespace std;

ifstream cin("second_friend_input.txt");
ofstream cout("second_friend_output.txt");

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int R, C;
        char c;
        bool tree = false;
        cin >> R >> C;
        for (int i = 0; i < R * C; i++)
        {
            cin >> c;
            if (c == '^')
                tree = true;
        }
        if (R == 1 || C == 1)
        {
            if (tree)
                cout << "Case #" << t << ": Impossible" << endl;
            else
            {
                cout << "Case #" << t << ": Possible" << endl;
                for (int i = 0; i < R; i++)
                {
                    for (int j = 0; j < C; j++)
                        cout << '.';
                    cout << endl;
                }
            }

            continue;
        }
        cout << "Case #" << t << ": Possible" << endl;
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
                cout << '^';
            cout << endl;
        }
    }
}