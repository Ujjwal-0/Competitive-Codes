#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int x1, y1, x2, y2, x3, y3, x4, y4;
	cin >> x1 >> y1 >> x2 >> y2;
	int X = abs(x1 - x2);
	int Y = abs(y1 - y2);
	if (x1 != x2 && y1 != y2 && X != Y) {
		cout << "-1\n";
	}
	else if (x1 == x2) {
		x3 = x1 + Y;
		y3 = y1;
		x4 = x2 + Y;
		y4 = y2;
		cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
	}
	else if (y1 == y2) {
		x3 = x1;
		y3 = y1 + X;
		x4 = x2;
		y4 = y2 + X;
		cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
	}
	else {
		cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
	}
	return 0;
}