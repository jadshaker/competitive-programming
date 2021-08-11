#include <iostream>
using namespace std;

int main() {
	int n, A = 0, D = 0;
	char c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (c == 'A')
			A++;
		else
			D++;
	}
	if (A > D)
		cout << "Anton" << endl;
	else if (A < D)
		cout << "Danik" << endl;
	else
		cout << "Friendship" << endl;
}