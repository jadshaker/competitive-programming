#include <iostream>
using namespace std;

int main() {
	int N, p, q, c = 0;
	cin >> N;
	for (int n = 0; n < N; n++) {
		cin >> p >> q;
		if (p + 2 <= q)
			c++;
	}
	cout << c << endl;
}