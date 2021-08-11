#include <iostream>
using namespace std;

int main() {
	int T, s = 0, best = 0;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int a, b;
		cin >> a >> b;
		s += b - a;
		if (s > best)
			best = s;
	}
	cout << best << endl;
}