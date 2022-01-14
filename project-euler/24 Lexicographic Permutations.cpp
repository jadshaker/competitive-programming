#include <iostream>
using namespace std;

int main()
{
    int count = 0, i, j, k, l, m, n, o, p, q, r;
    string permutation;
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            if (i != j)
                for (k = 0; k < 10; k++)
                    if (k != i && k != j)
                        for (l = 0; l < 10; l++)
                            if (l != i && l != j && l != k)
                                for (m = 0; m < 10; m++)
                                    if (m != i && m != j && m != k && m != l)
                                        for (n = 0; n < 10; n++)
                                            if (n != i && n != j && n != k && n != l && n != m)
                                                for (o = 0; o < 10; o++)
                                                    if (o != i && o != j && o != k && o != l && o != m && o != n)
                                                        for (p = 0; p < 10; p++)
                                                            if (p != i && p != j && p != k && p != l && p != m && p != n && p != o)
                                                                for (q = 0; q < 10; q++)
                                                                    if (q != i && q != j && q != k && q != l && q != m && q != n && q != o && q != p)
                                                                        for (r = 0; r < 10; r++)
                                                                            if (r != i && r != j && r != k && r != l && r != m && r != n && r != o && r != p && r != q)
                                                                            {
                                                                                count++;
                                                                                if (count == 1000000)
                                                                                {
                                                                                    permutation = to_string(i) + to_string(j) + to_string(k) + to_string(l) + to_string(m) + to_string(n) + to_string(o) + to_string(p) + to_string(q) + to_string(r);
                                                                                    cout << count << ": " << permutation << endl;
                                                                                    return 0;
                                                                                }
                                                                            }
}