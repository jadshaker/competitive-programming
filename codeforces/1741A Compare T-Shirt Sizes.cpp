#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n, m;
        cin >> n >> m;
        if (n[n.size() - 1] > m[m.size() - 1])
            cout << '<' << endl;
        else if (n[n.size() - 1] < m[m.size() - 1])
            cout << '>' << endl;
        else if (n.size() == m.size())
            cout << '=' << endl;
        else if (n[n.size() - 1] == 'L')
            cout << (n.size() > m.size() ? '>' : '<') << endl;
        else
            cout << (n.size() < m.size() ? '>' : '<') << endl;
    }
}