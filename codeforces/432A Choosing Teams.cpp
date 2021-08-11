#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n, k, count = 0;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	for (int i = 0; i < n; i++)
		if (k + a[i] <= 5)
			count++;
	cout << count / 3 << endl;
}