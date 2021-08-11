#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, i, s = 0;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
		s += a[a.size() - 1] - a[i];
	cout << s << endl;
}