#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = n;
	for (int i = 1; i < n; i++)
		ans += i * (n - i);
	cout << ans << endl;
}