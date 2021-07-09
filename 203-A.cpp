#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a, a + n);
	sort(b, b + m);
	int ans1 = max(2 * a[0], a[n - 1]);
	if (ans1 < b[0]) {
		cout << max(2 * a[0], a[n - 1]);
	}
	else {
		cout << "-1\n";
	}
	return 0;
}