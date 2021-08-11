#include <iostream>
#include <string>
using namespace std;

int main() {
	int count = 0, alpha[26] = { 0 };
	string s;
	getline(cin, s);
	for (int i = 1; i < s.length(); i += 3)
		if (alpha[int(s[i]) - 'a'] == 0)
			alpha[int(s[i]) - 'a'] = 1, count++;
	cout << count << endl;
}