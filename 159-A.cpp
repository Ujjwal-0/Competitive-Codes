#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m, k, j = 0;
	cin >> n >> m >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater<int>());
	while (k < m && j < n)
		k += a[j++] - 1;

	if (k < m) cout << "-1\n";
	else cout << j << endl;


	return 0;
}