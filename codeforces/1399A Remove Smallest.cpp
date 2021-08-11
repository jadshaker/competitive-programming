#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int n, i;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];
		sort(a.begin(), a.end());
		for (i = 0; i < n - 1; i++)
			if (a[i + 1] - a[i] > 1) {
				cout << "NO" << endl;
				break;
			}
		if (i == n - 1)
			cout << "YES" << endl;
	}
}