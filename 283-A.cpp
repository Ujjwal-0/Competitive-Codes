#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int idx = 0, ans = 0;
	vector<int> v(0);
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	int diff1 = INT_MAX;
	for (int i = 1; i < n - 1; i++) {
		if ((v[i + 1] - v[i - 1]) < diff1) {
			diff1 = v[i + 1] - v[i - 1];
			idx = i;
		}
	}
	v.erase(v.begin() + idx);
	for (int i = 0; i < n - 2; i++) {
		ans = max(ans, v[i + 1] - v[i]);
	}
	cout << ans << endl;
	return 0;
}