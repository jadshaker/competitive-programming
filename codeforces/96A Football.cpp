#include <iostream>
using namespace std;

int main() {
	int count = 1;
	string s;
	cin >> s;
	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == s[i + 1])
			count++;
		else
			count = 1;
		if (count == 7) {
			cout << "YES" << endl;
			return 0;
		}
	}
		cout << "NO" << endl;
}