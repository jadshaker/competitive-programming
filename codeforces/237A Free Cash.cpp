# include <iostream>
# include <vector>
using namespace std;

int main() {
    int n, h0, m0, cash = 1, cnt = 1, h, m;
    cin >> n >> h0 >> m0;
	n--;
	    while (n--) {
        cin >> h >> m;
        if (h == h0 && m == m0) {
            cnt += 1;
            if (cnt > cash)
            cash = cnt;
        } else
        	cnt = 1;
        h0 = h, m0 = m;
    }
    cout << cash << endl;
}