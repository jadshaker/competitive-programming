#include <iostream>
using namespace std;

#define ll long long

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		if (n == 0 || n == 1)
			cout << 0 << endl;
		else if (n == 2)
			cout << m << endl;
		else
			cout << m * 2 << endl;
	}
}