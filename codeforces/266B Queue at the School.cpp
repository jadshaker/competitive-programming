#include <iostream>
using namespace std;

int main() {
	int n, t;
	string s;
	cin >> n >> t;
	cin >> s;
	while (t > 0) {
		for (int i = 0; i < n - 1; i++)
			if (s[i] == 'B' && s[i + 1] == 'G')
				s[i + 1] = 'B', s[i] = 'G', i++;
		t--;
	}
	cout << s << endl;
}