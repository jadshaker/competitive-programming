#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> x(4);
	cin >> x[0] >> x[1] >> x[2] >> x[3];
	sort(x.begin(), x.end());
	cout << x[3] - x[0] << ' ' << x[3] - x[1] << ' ' << x[3] - x[2] << endl;
}