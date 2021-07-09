#include <bits/stdc++.h>
using namespace std;
int gcd(long long unsigned int a, long long unsigned int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	long long unsigned int l, r;
	cin >> l >> r;
	if (r - l > 1) {
		for (long long unsigned int i = l; i < r - 1; i++) {
			for (long long unsigned int j = i + 1; j < r; j++) {
				if ( gcd(i, j) == 1) {
					for (long long unsigned int k = j + 1; k <= r; k++) {
						if (gcd(j, k) == 1 && gcd(i, k) != 1) {
							cout << i << " " << j << " " << k << endl;
							return 0;
						}
					}
				}
			}
		}
	}
	cout << "-1\n";
	return 0;
}