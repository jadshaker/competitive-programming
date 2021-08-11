#include <iostream>
using namespace std;

int main() {
	int s[4], count = 0;
	cin >> s[0] >> s[1] >> s[2] >> s[3];
	if (s[0] == s[1] || s[0] == s[2] || s[0] == s[3])
		count++;
	if (s[1] == s[2] || s[1] == s[3])
		count++;
	if (s[2] == s[3])
		count++;
	cout << count << endl;
}