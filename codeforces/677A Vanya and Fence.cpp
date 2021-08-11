#include <iostream>
using namespace std;

int main() {
	int n, h, N, a;
	cin >> n >> h;
	N = n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a > h)
			N++;
	}
	cout << N << endl;
}