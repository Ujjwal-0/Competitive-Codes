#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n], is[3], ans[4] = { -1, -1, -1, -1};
	int c = 0, z1 = 0, z2 = 0, z3 = 0, z4 = 0, z5 = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] == 0) z1 = 1;
		else if (a[i] == 100) z2 = 1;
		else if (a[i] % 10 == 0) { z3 = 1; is[0] = a[i]; }
		else if (a[i] / 10 == 0) { z4 = 1; is[1] = a[i]; }
		else { z5 = 1; is[2] = a[i]; }
	}
	if (z1 == 1) {
		c++;
		ans[0] = 0;
	}
	if (z2 == 1) {
		c++;
		ans[1] = 100;
	}
	if (z3 == 1) {
		c++;
		ans[2] = is[0];
	}
	if (z4 == 1) {
		c++;
		ans[3] = is[1];
	}
	if (z5 == 1 && z4 == 0 && z3 == 0) {
		c++;
		ans[2] = is[2];
	}
	cout << c << endl;
	for (int i = 0; i < 4; i++) {
		if (ans[i] != -1) cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}