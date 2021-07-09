#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int w;
	cin >> w;
	if (w == 2) {
		cout << "NO\n";
		return 0;
	}
	if (w % 2 == 0) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}