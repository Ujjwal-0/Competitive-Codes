#include <bits/stdc++.h>
using namespace std;
int min(vector<int> &c, int s) {
	int m = c[0];
	for (int i = 0; i < s; i++) {
		if (m > c[i]) m = c[i];
	}
	return m;
}
int check(vector<int> &b, int s) {
	int y = b[0];
	for (int i = 0; i < s; i++) {
		if (b[i] != y) {
			return 1;
		}
	}
	return 0;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, sum = 0;
	cin >> n;
	vector<int> a(0);
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		a.push_back(t);
	}
	while (check(a, n)) {
		int m = min(a, n);
		for (int i = 0; i < n; i++) {
			if (a[i] % m == 0) a[i] = m;
			else  a[i] = a[i] % m;
		}
	}
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	cout << sum << endl;
	return 0;
}