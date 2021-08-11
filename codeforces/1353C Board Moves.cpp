#include <iostream>
using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n, ans = 0;
		cin >> n;
		if (n != 1)
			for (ll i = 3; i < n + 1; i += 2)
				ans += (i * 4 - 4) * (i - 1) / 2;
		cout << ans << endl;
	}
}