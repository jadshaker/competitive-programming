#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, score;
        cin >> n;
        vector<string> a(n), b(n), c(n);
        map<string, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (m.find(a[i]) == m.end())
                m[a[i]] = 1;
            else
                m[a[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (m.find(b[i]) == m.end())
                m[b[i]] = 1;
            else
                m[b[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            if (m.find(c[i]) == m.end())
                m[c[i]] = 1;
            else
                m[c[i]]++;
        }
        score = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[a[i]] > 2)
                ;
            else if (m[a[i]] > 1)
                score++;
            else
                score += 3;
        }
        cout << score << " ";
        score = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[b[i]] > 2)
                ;
            else if (m[b[i]] > 1)
                score++;
            else
                score += 3;
        }
        cout << score << " ";
        score = 0;
        for (int i = 0; i < n; i++)
        {
            if (m[c[i]] > 2)
                ;
            else if (m[c[i]] > 1)
                score++;
            else
                score += 3;
        }
        cout << score << endl;
    }
}
