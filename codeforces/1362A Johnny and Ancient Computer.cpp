#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while (t--) {
		long double a, b, nb;
		cin >> a >> b;
		nb = log2l(max(a, b) / min(a, b));
		cout << (a == b ? 0 : nb == long(nb) ? ceil(nb / 3) : -1) << endl;
	}
}