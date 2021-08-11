#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int x;
		cin >> x;
		vector<int> a;
		if (x >= 1000)
			a.push_back(x - x % 1000), x %= 1000;
		if (x >= 100)
			a.push_back(x - x % 100), x %= 100;
		if (x >= 10)
			a.push_back(x - x % 10), x %= 10;
		if (x > 0)
			a.push_back(x);
		cout << a.size() << endl;
		for (int i = 0; i < a.size(); i++)
			cout << a[i] << ' ';
		cout << endl;
	}
}