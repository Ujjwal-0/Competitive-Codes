#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
	int a, b, c, d;
	a = (c1 + d1 - r2) / 2;
	b = r1 - a;
	c = c1 - a;
	d = d1 - a;
	if (a != b && a != c && a != d && b != c && b != d && c != d && (a <= 9 && a > 0) && (b <= 9 && b > 0) && (c <= 9 && c > 0) && (d <= 9 && d > 0)) {
		cout << a << " " << b << endl;
		cout << c << " " << d << endl;
	}
	else cout << "-1\n";
	return 0;
}