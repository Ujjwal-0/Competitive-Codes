#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, cnt = 0;
		cin >> n;
		int a[n];
		int x, y;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		for (int i = 0; i < n - 1; i++) {
			x = max(a[i], a[i + 1]);
			y = min(a[i], a[i + 1]);
			while (x > 2 * y) {
				x = (x + 1) / 2;
				cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}