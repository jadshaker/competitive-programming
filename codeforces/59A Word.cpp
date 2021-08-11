#include <iostream>
using namespace std;

int main() {
	int u = 0, l = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		if (int(s[i]) - 'A' > 26)
			l++;
		else
			u++;
	if (u > l)
		for (int i = 0; i < s.length(); i++)
			s[i] = toupper(s[i]);
	else
		for (int i = 0; i < s.length(); i++)
			s[i] = tolower(s[i]);
	cout << s << endl;
}