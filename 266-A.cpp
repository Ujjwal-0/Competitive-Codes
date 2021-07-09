#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m, a, b, x = 0, ans = 0;
	float c;
	cin >> n >> m >> a >> b;
	x = (n % m) * a;
	if (a * m >= b) {
		if (x == 0) {
			ans = (n / m) * b;
			cout << ans << endl;
			return 0;
		}
		if (x != 0) {
			if (x > b) x = b;
			ans = (n / m) * b + x;
			cout << ans << endl;
		}
	}
	else {
		cout << n*a << endl;
	}
	return 0;
}