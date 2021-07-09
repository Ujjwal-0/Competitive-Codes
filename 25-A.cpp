#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, c1 = 0, c2 = 0, i1, i2;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (t % 2 == 0) {
			c1++;
			i1 = i + 1;
		}
		else {
			c2++;
			i2 = i + 1;
		}
	}
	if (c1 < c2) {
		cout << i1 << endl;
	}
	else {
		cout << i2 << endl;
	}
	return 0;
}