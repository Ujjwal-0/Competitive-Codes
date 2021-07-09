#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	long long int n, k;
	cin >> n >> k;
	if (n % 2 == 0) {
		if (k <= n / 2) {
			cout << (2 * (k) - 1) << endl;
		}
		else {
			k = k - n / 2;
			cout << (2 * k) << endl;
		}
	}
	else {
		if (k <= (n + 1) / 2) {
			cout << ((2 * k) - 1) << endl;
		}
		else {
			k = (k - (n + 1) / 2);
			cout << (2 * k) << endl;
		}
	}

	return 0;
}