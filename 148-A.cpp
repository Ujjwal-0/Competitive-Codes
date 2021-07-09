#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int y, k, n, c = 0;
	cin >> y >> k >> n;
	for (int i = k; i <= n; i += k) {
		if (i > y) {
			cout << i - y << " ";
			c = 1;
		}
	}
	if (!c) {
		cout << "-1";
	}
	cout << endl;
	return 0;
}