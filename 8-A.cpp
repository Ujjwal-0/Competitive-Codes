#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((2 * b == a + c) && (2 * c == b + d)) {
		cout << d + b - a << endl;
	}
	else if ((b * b == a * c) && (c * c == b * d)) {
		float r = (float)b / (float)a;
		float e = r * d;
		if (e == (int)e) {
			cout << (int)e << endl;
		}
		else {
			cout << "42\n";
		}
	}
	else {
		cout << "42\n";
	}
	return 0;
}
