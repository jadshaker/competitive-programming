#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	double n, x, s = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		s += x ;
	}
	s /= n;
	cout << setprecision(14) << fixed << s << endl;
}