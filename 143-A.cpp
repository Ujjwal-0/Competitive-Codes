#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, p = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a = 0, b = 0, c = 0, sum = 0;
		cin >> a >> b >> c;
		sum += a + b + c;
		if (sum >= 2) {
			p++;
		}
	}
	cout << p << endl;
	return 0;
}