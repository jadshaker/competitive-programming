#include <iostream>
using namespace std;

#define ll long long

ll func(ll x, ll p) {
	return (x - p % x) % x;
}

int main() {
	ll t;
	cin >> t;
	while (t--) {
		ll p, a, b, c;
		cin >> p >> a >> b >> c;
		cout << min(min(func(a, p), func(b, p)), func(c, p)) << endl;
	}
}