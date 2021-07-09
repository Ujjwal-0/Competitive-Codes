#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	long long int n, m, t = 0, c = 0, h = 0;
	cin >> n >> m;
	cin >> t;
	c += (t - 1);
	m--;
	for (int i = 0; i < m; i++) {
		cin >> h;
		if (h >= t)
			c += (h - t);
		else
			c += (n - t + h);
		t = h;
	}
	cout << c << endl;
	return 0;
}