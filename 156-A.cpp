#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n];
	int chest = 0, bicep = 0, back = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (i % 3 == 0) {
			chest += a[i];
		}
		else if (i % 3 == 1) {
			bicep += a[i];
		}
		else {
			back += a[i];
		}
	}
	if (chest > bicep && chest > back) {
		cout << "chest\n";
	}
	else if (bicep > chest && bicep > back) {
		cout << "biceps\n";
	}
	else {
		cout << "back\n";
	}
	return 0;
}