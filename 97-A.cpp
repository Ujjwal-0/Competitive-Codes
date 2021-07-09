#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	map<int, int> m;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		m.insert({x, i + 1});
	}
	for (auto itr : m) {
		cout << itr.second << " ";
	}
	return 0;
}