#include <iostream>
using namespace std;

#define ll long long

int main () {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll ans = 0;
		for (int i = 0; i < n; i++) {
			ll x;
			cin >> x;
			ans = max(0LL, ans + x);
		}
		cout << ans << endl;
	}
}