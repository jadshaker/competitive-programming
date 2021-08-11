#include <iostream>
using namespace std;

#define ll long long

int main() {
	string s;
	cin >> s;
	for (int i = 2; i < s.length(); i++)
		if (int(s[i] - 'A') == (int(s[i - 1] - 'A') + int(s[i - 2] - 'A')) % 26)
			continue;
		else
			return cout << "NO" << endl, 0;
	cout << "YES" << endl;
}