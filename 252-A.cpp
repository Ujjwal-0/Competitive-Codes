#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, v;
	cin >> n >> v;
	int cnt = 0;
	set<int> vt;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		bool u = false;
		for (int j = 0; j < k; j++) {
			int t;
			cin >> t;
			if (v > t && !u) {
				u = true;
				cnt++;
				vt.insert(i + 1);
			}

		}
	}
	if (cnt) {
		cout << cnt << endl;
		for (auto it : vt) {
			cout << it << " ";
		}
		cout << endl;
	}
	else {
		cout << cnt << endl;
	}
	return 0;
}