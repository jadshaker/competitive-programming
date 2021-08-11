#include <iostream>
using namespace std;

int main() {
	int n, p, a, x;
	cin >> n >> p;
	int *l = new int[n];
	for (int i = 0; i < n; i++)
		l[i] = 0;
	for (int i = 0; i < p; i++) {
		cin >> x;
		l[x - 1] = 1;
	}
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> x;
		l[x - 1] = 1;
	}
	for (int i = 0; i < n; i++)
		if (l[i] == 0) {
			cout << "Oh, my keyboard!" << endl;
			return 0;
		}
	cout << "I become the guy." << endl;
}