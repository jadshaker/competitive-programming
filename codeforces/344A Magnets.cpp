#include <iostream>
using namespace std;

int main() {
	int n, a, b = 0, g = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a != b)
			g++;
		b = a;
	}
	cout << g << endl;
}