#include <iostream>
using namespace std;

int main() {
	string a, b;
	int ai, bi;
	cin >> a >> b;
		for (int i = 0; i < a.length(); i++) {
			a[i] = tolower(a[i]), b[i] = tolower(b[i]), ai = int(a[i]), bi = int(b[i]);
			if (ai > bi) {
				cout << 1 << endl;
				return 0;
			} else if (ai < bi) {
				cout << -1 << endl;
				return 0;
			}
		}
		cout << 0 << endl;
}