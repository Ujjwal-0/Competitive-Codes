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
	set<int> p, q;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		p.insert(x);
		q.insert(y);
	}
	int mn = min(p.size(), q.size());
	cout << mn << endl;
	return 0;
}