#include <iostream>
#include <vector>
using namespace std;

int main() {
	int x, count = 0;
	cin >> x;
	vector<char> a(x);
	for (int i = 0; i < x; i++)
		cin >> a[i];
	for (int i = 1; i < x; i++)
		if (a[i] == a[i - 1])
			count++;
	cout << count << endl;
}