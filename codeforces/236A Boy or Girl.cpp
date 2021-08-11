#include <iostream>
using namespace std;

int main() {
	int count = 0;
	string s;
	bool alpha[26] = { false };
	cin >> s;
	for (int i = 0; i < s.length(); i++)
		alpha[int(s[i]) - 'a'] = true;
	for (int i = 0; i < 26; i++)
		if (alpha[i])
			count++;
	if (count % 2 == 0)
		cout << "CHAT WITH HER!" <<endl;
	else
		cout << "IGNORE HIM!" << endl;
}