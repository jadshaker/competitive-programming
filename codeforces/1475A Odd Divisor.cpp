#include <iostream>
using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;
		if (n & (n - 1))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}