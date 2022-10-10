#include <fstream>
#include <vector>
using namespace std;

#define MOD 1000000007

ifstream cin("watering_well_chapter_1_input.txt");
ofstream cout("watering_well_chapter_1_output.txt");

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int n, s = 0, q, x, y, Dx, Dy;
        cin >> n;
        vector<vector<int> > trees(n, vector<int>(2, 0));
        for (int i = 0; i < n; i++)
            cin >> trees[i][0] >> trees[i][1];
        cin >> q;
        for (int i = 0; i < q; i++)
            {
                cin >> x >> y;
                for (int j = 0; j < n; j++)
                {
                    Dx = (x - trees[j][0]) * (x - trees[j][0]) % MOD;
                    Dy = (y - trees[j][1]) * (y - trees[j][1]) % MOD;
                    s = (s + Dx + Dy) % MOD;
                }
            }
        cout << "Case #" << t << ": " << s << endl;
    }
}