#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	if (n % 2 == 0) {
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 0) {
				cout << i - 1 << " ";
			}
			else {
				cout << i + 1 << " ";
			}
		}
	}
	else {
		cout << "-1\n";
	}
	return 0;
}