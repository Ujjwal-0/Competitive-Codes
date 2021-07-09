#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int r1, c1, r2, c2, d1 = 0, d2 = 0;
	cin >> r1 >> c1 >> r2 >> c2;
	int rook = 0, bishop = 0, king = 0;
	d1 = abs(r2 - r1);
	d2 = abs(c2 - c1);
	if (r1 != r2 && c1 != c2) {
		rook = 2;
	}
	else if (r1 == r2 && c1 == c2) {
		rook = 0;
	}
	else if (r1 == r2 || c1 == c2) {
		rook = 1;
	}
	if ((r1 + c1) % 2 != (r2 + c2) % 2) {
		bishop = 0;
	}
	else if (d1 == d2) {
		bishop = 1;
	}
	else
		bishop = 2;
	king = max(d1, d2);
	cout << rook << " " << bishop << " " << king << endl;
	return 0;
}