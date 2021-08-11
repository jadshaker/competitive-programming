#include <iostream>
using namespace std;

int main() {
	int alpha1[26] = { 0 }, alpha2[26] = { 0 };
	string a, b, c;
	cin >> a >> b >> c;
	for (int i = 0; i < a.length(); i++)
		alpha1[int(a[i]) - 'A']++;
	for (int i = 0; i < b.length(); i++)
		alpha1[int(b[i]) - 'A']++;
	for (int i = 0; i < c.length(); i++)
		alpha2[int(c[i]) - 'A']++;
	for (int i = 0; i < 26; i++)
		if (alpha1[i] != alpha2[i]) {
			cout << "NO" << endl;
			return 0;
		}
	cout << "YES" << endl;
}