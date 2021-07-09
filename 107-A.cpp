#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int x, y, z, ans = 0;
	x = (k * l) / nl;
	y = (c * d);
	z = (p / np);
	ans = min(x, min(y, z)) / n;
	cout << ans << endl;
	return 0;
}