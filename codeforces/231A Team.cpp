#include <iostream>
using namespace std;

int main() {
	int T, count = 0;
	cin >> T;
	for (int t = 0; t < T; t++) {
		bool a, b, c;
		cin >> a >> b >> c;
		if (a && b || a && c || b && c) count++;
	}
	cout << count << endl;
}