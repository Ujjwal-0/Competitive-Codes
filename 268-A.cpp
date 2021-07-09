#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	set<int> s;
	cin >> n;
	int p;
	cin >> p;
	for (int i = 0; i < p; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int y;
		cin >> y;
		s.insert(y);
	}
	if (s.size() == n) {
		cout << "I become the guy.\n";
	}
	else {
		cout << "Oh, my keyboard!\n";
	}

	return 0;
}