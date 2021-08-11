#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, m = 0;
	cin >> n;
	vector<int> a(n), b(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	b = a;
	sort(b.begin(), b.end());
	int i;
	for (i = 0; i < a.size(); i++)
		if (a[i] == b[a.size() - 1])
			break;
	m = i;
	for (i = a.size() - 1; i > 0; i--)
		if (a[i] == b[0])
			break;
	if (m > i)
		--m;
	m += a.size() - 1 - i;
	cout << m << endl;
}