#include <iostream>
using namespace std;

int main() {
	int n, h = 0, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > 0)
			h += x;
		else if (h > 0)
			h--;
		else
			count++;				
	}
	cout << count << endl;
}