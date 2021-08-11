#include <iostream>
using namespace std;

int main() {
	int y;
	cin >> y;
	while (y++)	{
		int a = y % 10, b = (y / 10) % 10 , c = (y / 100) % 10, d = y / 1000;
		if (a != b && a != c && a != d)
			if (b != c && b != d)
				if (c != d)
					break;
	}
	cout << y << endl;
}