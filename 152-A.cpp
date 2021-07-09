#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a, b;
	int zeroes = 0, ones = 0, x, y;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == 0) {
			zeroes++;
		}
		if (b == 1) {
			ones++;
		}
	}
	x = n - zeroes;
	y = n - ones;
	int ans = min(x, zeroes) + min(y, ones);
	cout << ans << "\n";
	return 0;
}