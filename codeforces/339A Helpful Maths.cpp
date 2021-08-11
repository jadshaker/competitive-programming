#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<int> a;
	for (int i = 0; i < s.length(); i += 2)
		a.push_back(int(s[i]) - '0');
	sort(a.begin(), a.end());
	for (int i = 0; i < a.size() - 1; i++)
		cout << a[i] << '+';
	cout << a[a.size() - 1] << endl;
}