#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		string b;
		cin >> b;
		for (int i = 0; i < b.length() - 1; i += 2)
			cout << b[i];
		cout << b[b.length() - 1] << endl;
	}
}