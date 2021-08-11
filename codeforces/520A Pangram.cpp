#include <iostream>
using namespace std;

int main() {
	int n, alpha[26] = { 0 }, count = 0;
	char c;
	cin >> n;
	if (n < 26) {
		cout << "NO" << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> c;
		c = tolower(c);
		if (alpha[int(c) - 'a'] == 0)
			alpha[int(c) - 'a'] = 1, count++;
	}
	if (count == 26)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}