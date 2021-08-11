#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k, s = 0;
		cin >> n >> k;
		int *a = new int[n], *b = new int[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i <n; i++)
			cin >> b[i];
		sort(a, a + n);
		sort(b, b + n, greater<int>());
		while (k--)
			for (int j = 0; j < n; j++)
				if (b[j] > a[j]) {
					swap(a[j], b[j]);
					break;
				}
		for (int i = 0; i < n; i++)
			s += a[i];
		cout << s << endl;
	}
}