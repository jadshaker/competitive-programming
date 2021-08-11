#include <iostream>
#include <vector>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		int d;
		cin >> d;
		vector<int> p;
		for (int i = d + 1; ; i++) {
			int q = 1;
			for (int j = 2; j * j <= i; j++)
				if (i % j == 0) {
					q = 0;
					break;
				}
			if (q) {
				p.push_back(i);
				break;
			}
		}
		for (int i = p.back() + d; ; i++) {
			int q = 1;
			for (int j = 2; j * j <= i; j++)
				if (i % j == 0) {
					q = 0;
					break;
				}
			if (q) {
				p.push_back(i);
				break;
			}
		}
		cout << min(1ll * p[0] * p[1], 1ll * p[0] * p[0] * p[0]) << endl;
	}
}