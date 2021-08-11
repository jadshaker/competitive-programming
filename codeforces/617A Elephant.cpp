#include <iostream>
using namespace std;

int main() {
	int a, s;
	cin >> a;
	if (a % 5 == 0)
		s = a / 5;
	else
		s = a / 5 + 1;
	cout << s << endl;
}