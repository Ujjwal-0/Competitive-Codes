#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a, b, x = 0, y = 0, z = 0;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		y = x - a + b;
		x = y;
		z = max(z, y);
	}
	cout << z << "\n";
	return 0;
}