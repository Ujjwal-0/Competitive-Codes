#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, x;
	cin >> n >> x;
	int m = 0, t = 1, l, u;
	for (int i = 0; i < n; i++) {
		cin >> l >> u;
		m += u - l + (l - t) % x + 1;
		t = u + 1;
	}
	cout << m << endl;
	return 0;
}