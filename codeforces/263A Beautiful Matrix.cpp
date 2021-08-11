#include <iostream>
using namespace std;

int main() {
	char a[5][5];
	int i, j, bi, bj;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++){
			cin >> a[i][j];
			if (a[i][j] == '1')
				cout << abs(2 - i) + abs(2 - j) << endl;
		}
	}
}