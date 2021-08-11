#include <iostream>
using namespace std;

int main() {
	int k[2], r, count = 1;
	cin >> k[0] >> r;
	k[1] = k[0];
	for(;;)
		if (k[1] % 10 == 0 || (k[1] - r) % 10 == 0) {
			cout << count << endl;
			break;
		} else
			count++, k[1] += k[0];
}