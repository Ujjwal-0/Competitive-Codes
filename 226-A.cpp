#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, c, diff = 0;
	cin >> n >> c;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++) {
		if (a[i] - a[i + 1] > diff) {
			diff = a[i] - a[i + 1];
		}
	}
	if (diff - c > 0)
		cout << diff - c << endl;
	else
		cout << "0\n";
	return 0;
}