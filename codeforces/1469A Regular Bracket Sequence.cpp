#include <iostream>
using namespace std;

int main () {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		cout << ((s.length() % 2 == 0 && s[0] != ')' && s[s.length() - 1] != '(') ? "YES" : "NO") << endl;
	}
}