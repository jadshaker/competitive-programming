#include <iostream>
using namespace std;

int main() {
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, b, w;
		cin >> x;
		if (i == 0)
			b = x, w = x;
		else {
			if (x > b)
				b = x, count++;
			else if (x < w)
				w = x, count++;
		}
	}
	cout << count << endl;
}