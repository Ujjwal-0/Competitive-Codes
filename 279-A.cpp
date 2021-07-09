#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, ans;
	cin >> n;
	int t[n];
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	int x = 0, y = 0, z = 0;
	vector<int>p, q, r;
	for (int i = 0; i < n; i++) {
		if (t[i] == 1) {
			x++;
			p.push_back(i + 1);
		}
		if (t[i] == 2) {
			y++;
			q.push_back(i + 1);
		}
		if (t[i] == 3) {
			z++;
			r.push_back(i + 1);
		}
	}
	if (x == 0 || y == 0 || z == 0) {
		cout << "0\n";
		return 0;
	}
	else {
		ans = min(x, min(y, z));
		cout << ans << endl;
	}
	sort(t, t + n);
	for (int i = 0; i < ans; i++) {
		cout << p[i] << " " << q[i] << " " << r[i] << endl;
	}
	return 0;
}