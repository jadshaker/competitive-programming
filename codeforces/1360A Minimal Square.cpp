#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while (t--) {
		int l, w, c;
		cin >> l >> w;
		c = min(l, w);
		l = max(l, w);
		w = c;
		if (l > 2 * w)
			cout << l * l << endl;
		else
			cout << 4 * w * w << endl;
	}

}