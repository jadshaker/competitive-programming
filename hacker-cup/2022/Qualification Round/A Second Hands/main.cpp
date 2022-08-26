#include <fstream>
#include <vector>
using namespace std;

ifstream cin("second_hands_input.txt");
ofstream cout("second_hands_output.txt");

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int n, k, x;
        bool possible = true;
        cin >> n >> k;
        if (n > k * 2)
        {
            cout << "Case #" << t << ": NO" << endl;
            for (int i = 0; i < n; i++)
                cin >> x;
            continue;
        }
        vector<int> s(101);
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (++s[x] > 2)
                possible = false;
        }
        cout << "Case #" << t << ": " << (possible ? "YES" : "NO") << endl;
    }
}