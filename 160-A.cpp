#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, k, cnt = 0, ans = 0;
	cin >> n >> k;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		while (a[i] != 0) {
			if (a[i] % 10 == 4 || a[i] % 10 == 7)
				cnt++;
			a[i] = a[i] / 10;
		}
		if (cnt <= k)
			ans++;
		cnt = 0;
	}
	cout << ans << endl;
	return 0;
}