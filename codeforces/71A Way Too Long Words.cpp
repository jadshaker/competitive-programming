#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		string s;
		cin >> s;
		if (s.length() > 10)
			cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
		else
			cout << s << endl;
	}
}