#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int a, b, count = 0;
		cin >> a >> b;
		if (b > a)
			cout << b - a << endl;
		else if (a % b == 0) 
			cout << 0 << endl;
		else
			cout << b * ((a / b) + 1 ) - a << endl;
	}
}