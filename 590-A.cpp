#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int q;
	cin >> q;
	while (q--) {
		int n;
		cin >> n;
		int a[n];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		if (sum % n == 0) {
			cout << sum / n << endl;
		}
		else {
			cout << (sum / n) + 1 << endl;
		}
	}
	return 0;
}