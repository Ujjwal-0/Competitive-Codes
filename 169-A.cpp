#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, k, ans = 0;
	cin >> n >> k;
	vector<int> v(0);
	for (int i = 0; i < n; i++) {
		int f, t;
		cin >> f >> t;
		if (t > k) {
			ans = f - (t - k);
			v.push_back(ans);
		}
		else {
			ans = f;
			v.push_back(ans);
		}
	}
	sort(v.begin(), v.end(), greater<int>());
	cout << v[0] << endl;
	return 0;
}
