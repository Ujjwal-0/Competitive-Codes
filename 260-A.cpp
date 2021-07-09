#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n - 1; i++) {
		if (v[i].second > v[i + 1].second) {
			cout << "Happy Alex\n";
			return 0;
		}
	}
	cout << "Poor Alex\n";
	return 0;
}