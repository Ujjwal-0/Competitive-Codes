#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, p = 0, q = 1;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	int x = abs(a[1] - a[0]);
	for (int i = 1; i < n - 1; i++) {
		if (x > abs(a[i + 1] - a[i])) {
			x = abs(a[i + 1] - a[i]);
			p = i;
			q = i + 1;
		}
	}
	if (x > abs(a[n - 1] - a[0])) {
		p = 0;
		q = n - 1;
	}
	p++; q++;
	cout << p << " " << q << endl;
	return 0;
}