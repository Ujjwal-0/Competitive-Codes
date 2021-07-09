#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int j = 1, cnt = 0, k, ans = 0;
	vector<int> v;
	while (ans <= n) {
		ans = (j * (j + 1)) / 2;
		v.push_back(ans);
		j++;
		cnt++;
	}
	for (int i = 0; i < cnt; i++) {
		k = n - v[i];
		if (binary_search(v.begin(), v.end(), k)) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}