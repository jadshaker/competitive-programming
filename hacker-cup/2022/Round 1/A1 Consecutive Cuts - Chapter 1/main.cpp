#include <fstream>
#include <vector>
using namespace std;

ifstream cin("consecutive_cuts_chapter_1_input.txt");
ofstream cout("consecutive_cuts_chapter_1_output.txt");

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int n, k, first = 0;
        bool possible = true;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == a[0])
                first = i;
        }
        if (k == 0)
        {
            for (int i = 0; i < n && possible; i++)
                if (a[i] != b[i])
                    possible = false;
        }
        if (k == 1)
        {
            for (int i = 0; i < n && possible; i++)
                if (a[i] == b[i])
                    possible = false;
        }
        if (n == 2)
        {
            if (k % 2 == 0)
            {
                if (a[0] == b[1])
                    possible = false;
            }
            else
            {
                if (a[0] == b[0])
                    possible = false;
            }
        }
        else
        {
            for (int i = first, j = 0; i < n && possible; i++, j++)
                if (b[i] != a[j])
                    possible = false;
            for (int i = 0, j = n - first; i < first && possible; i++, j++)
                if (b[i] != a[j])
                    possible = false;
        }
        cout << "Case #" << t << ": " << (possible ? "YES" : "NO") << endl;
    }
}