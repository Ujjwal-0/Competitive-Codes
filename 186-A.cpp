#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int x, y, z, p, ans;
	x = n / 10;
	z = n % 10;
	y = n / 100;
	p = (y * 10) + z;
	//cout << p << " ";
	if (n >= 0) {
		cout << n << endl;
	}
	else {
		ans = max(x, p);
		cout << ans << endl;
	}
	return 0;
}