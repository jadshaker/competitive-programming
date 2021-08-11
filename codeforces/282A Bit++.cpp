#include <iostream>
using namespace std;

int main() {
	int T, x = 0;
	cin >> T;
	for (int t = 0; t < T; t++) {
		char c[3];
		cin >> c[0] >> c[1] >> c[2];
		if (c[1] == '+')
			x++;
		else
			x--;
	}
	cout << x << endl;
}