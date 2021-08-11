#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, s[2] = { 0 }, count = 0;
	cin >> n;
	int *a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s[0] += a[i];
	}
	sort(a, a + n, greater<int>());
	s[0] /= 2;
	for (int i = 0; i < n; i++) {
		s[1] += a[i], count++;
		if (s[1] > s[0]) {
			cout << count << endl;
			return 0;
		}
	}
}