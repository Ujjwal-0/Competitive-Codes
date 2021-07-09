#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	int a[m], best = INT_MAX;
	for (int i = 0; i < m; i++) {
		cin >> a[i];
	}
	sort(a, a + m);

	for (int k = 0; k < m - n + 1; k++) {
		best = min(best, a[k + n - 1] - a[k]);
	}
	cout << best << endl;
	return 0;
}