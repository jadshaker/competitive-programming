#include <fstream>
#include <vector>
using namespace std;

ifstream cin("consecutive_cuts_chapter_2_validation_input.txt");
ofstream cout("consecutive_cuts_chapter_2_validation_output.txt");

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int n, k;
        bool possible = true;
        cin >> n >> k;
        vector<int> a(2 * n), b(n), first;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[n + i] = a[i];
        }
        for (int i = 0; i < n; i++)
            cin >> b[i];
        if (k == 0)
        {
            for (int i = 0; i < n; i++)
                if (a[i] != b[i])
                    possible = false;
        }
        else if (k == 1)
        {
            possible = false;
            for (int i = 0; i < n; i++)
                if (a[i] != b[i])
                    possible = true;
        }
        if (!possible)
        {
            cout << "Case #" << t << ": NO" << endl;
            continue;
        }
        if (n == 2)
        {
            possible = false;
            if (k % 2 == 0)
            {
                if (a[0] == b[0] && a[1] == b[1])
                    possible = true;
            }
            else
            {
                if (a[0] == b[1] && a[1] == b[0])
                    possible = true;
            }
            cout << "Case #" << t << ": " << (possible ? "YES" : "NO") << endl;
            continue;
        }
        // for (int l = 0; l < first.size(); l++)
        // {
        //     int f = first[l];
        //     possible = true;
        //     for (int i = 0, j = f; i < n - f && possible; i++, j++)
        //         if (a[i] != b[j])
        //             possible = false;
        //     for (int i = n - f, j = 0; i < n; i++, j++)
        //         if (a[i] != b[j])
        //             possible = false;
        //     if (possible)
        //         break;
        // }
        possible = includes(a.begin(), a.end(), b.begin(), b.end());
        cout << "Case #" << t << ": " << (possible ? "YES" : "NO") << endl;
    }
}