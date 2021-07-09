#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int l, r;
	cin >> l >> r;
	int a[10] = {0}, y, x = 0;
	while (l <= r) {
		y = l;
		while (y != 0) {
			a[y % 10]++;
			y = y / 10;
		}
		y = l;
		for (int i = 0; i < 10; i++) {
			if (a[i] >= 2) {
				x++;
			}
		}
		if (x == 0) {
			cout << y << "\n";
			break;
		}
		memset(a, 0, sizeof(a));
		x = 0;
		l++;
	}
	if (l > r) {
		cout << "-1\n";
	}
	return 0;
}