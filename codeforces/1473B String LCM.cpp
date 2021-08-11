#include <bits/stdc++.h>
using namespace std;

string func (string s, int k) {
	string ans = "";
	while (k--) ans += s;
	return ans;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		string s, x;
		cin >> s >> x;
		int n = s.length(), m = x.length();
		int g = __gcd(n, m);
		if (func(s, m / g) == func(x, n / g))
			cout << func(s, m / g) << endl;
		else
			cout << -1 << endl;
	}
}