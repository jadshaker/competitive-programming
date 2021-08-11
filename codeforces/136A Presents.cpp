#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n, b;
	cin >> n;
	vector<int> a(n);
	for (int i = 1; i <= n; i++) {
		cin >> b;
		a[b] = i;
	}
	for (int i = 1; i <= n; i++)
		:cout << a[i] << ' ';
}