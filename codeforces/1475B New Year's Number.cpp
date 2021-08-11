#include <iostream>
using namespace std;

#define ll long long

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, count = 1;
		cin >> n;
		while (n > 2020)
			n -= 2020, count++;
		if ((n > 0 && n < count) || n == 2020 || n == 2021)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	
}