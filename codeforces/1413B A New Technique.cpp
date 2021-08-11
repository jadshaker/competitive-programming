#include <iostream>
using namespace std;

int a[250010], p[510][510];

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n, m, x;
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> x, a[x] = j;
		for (int i = 1; i <= m; i++)
			for (int j = 1; j <= n; j++)
				cin >> x, p[j][a[x]] = x;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++)
				cout << p[i][j] << ' ';
			cout << endl;
		}
	}
}