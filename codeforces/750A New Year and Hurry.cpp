#include <iostream>
using namespace std;

int main() {
	int n, k, i, sum, x, c;
	cin >> n >> k;
	x = 240 - k, sum = 0, c = 0;
	for (i = 1; i <= n; i++) {
		sum += 5 * i;
		if (sum > x)
			break;
		c++;
	}
	cout << c << endl;
}