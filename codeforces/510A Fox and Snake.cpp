#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	for (int i = 0; i < a; i++) {
		if ((i - 1) % 4 != 0)
			cout << '#';
		for (int j = 0; j < b - 1; j++)
			if (i % 2 == 0)
				cout << '#';
			else 
				cout << '.';
		if ((i - 1) % 4 == 0)
			cout << '#';
		cout << endl;
	}
}