#include <iostream>
using namespace std;

int main() {

	int t, c = 0, m = 0;
	cin >> t;
	while (t--) {
		int a, b;
		cin >> a >> b;
		if (a > b)
			m++;
		else if (b > a)
			c++;
	}
	if (m > c)
		cout << "Mishka" << endl;
	else if (c > m)
		cout << "Chris" << endl;
	else
		cout << "Friendship is magic!^^";

}