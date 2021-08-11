#include <iostream>
using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n, s, x = 1;
		cin >> n;
		s = n * (n + 1) / 2;
		while (x <= n)
			x *= 2, s -= x;
		cout << s << endl;
	}
}