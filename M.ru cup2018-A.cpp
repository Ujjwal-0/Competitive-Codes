#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int x, y, z, t1, t2, t3;
	cin >> x >> y >> z >> t1 >> t2 >> t3;
	int d1 = abs(x - y) * t1;
	int d2 = abs(x - z) * t2 + abs(x - y) * t2 + 3 * t3;
	if (d2 <= d1) {
		cout << "YES\n";
	}
	else
		cout << "NO\n";
	return 0;
}