#include <iostream>
#include <string>
using namespace std;

bool lucky(short& n) {
	string s = to_string(n);
	for (int i = 0; i < s.length(); i++)
		if (s[i] != '4' && s[i] != '7')
			return false;
	return true;			
}

int main() {
	short count = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		if (s[i] == '4' || s[i] == '7')
			count++;
	if (lucky(count))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}