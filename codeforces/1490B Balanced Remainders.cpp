#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int &x : a)
			cin >> x;
		int ans = 0;
		vector<int> c(3);
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < n; j++)
				if (a[j] % 3 == i)
					c[i]++;
		while (*min_element(c.begin(), c.end()) != n / 3)
			for (int i = 0; i < 3; i++)
				if (c[i] > n / 3)
					ans++, c[i]--, c[(i + 1) % 3]++;
		cout << ans << endl;
	}
}