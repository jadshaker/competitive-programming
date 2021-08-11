#include <iostream>
using namespace std;

#define ll long long

int main () {
	int t;
	cin >> t;
	while (t--) {
		ll x, y, k;
		cin >> x >> y >> k;
		cout << ((y + 1) * k + x - 3) / (x - 1) + k << endl;
	}
}