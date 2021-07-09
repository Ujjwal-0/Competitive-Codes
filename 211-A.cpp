#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, x;
	cin >> n;
	x = n;
	if (x == 0) {
		cout << "O-|-OOOO\n";
	}
	while (x != 0) {
		int t = x % 10;
		if (t >= 5) {
			cout << "-O|";
			t = t - 5;
		}
		else {
			cout << "O-|";
		}
		if (t == 1) {
			cout << "O-OOO";
		}
		else if (t == 2) {
			cout << "OO-OO";
		}
		else if (t == 3) {
			cout << "OOO-O";
		}
		else if (t == 4) {
			cout << "OOOO-";
		}
		else if (t == 0) {
			cout << "-OOOO";
		}
		x = x / 10;
		cout << endl;
	}
	return 0;
}