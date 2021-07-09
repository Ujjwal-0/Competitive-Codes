#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, x = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int d = (n + 1) / 2;
	for (int i = 0; i < n; i++) {
		x = a[i];
		int c = 0;
		for (int j = 0; j < n; j++) {
			if (x == a[j]) c++;
		}
		if (c > d) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}