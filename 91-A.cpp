#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, y = 0;
	cin >> n;
	int a[] = {4, 7, 47, 74, 447, 474, 477, 747, 774, 777};
	int x = sizeof(a) / sizeof(int);
	for (int i = 0; i < x; i++) {
		if (n % a[i] == 0) {
			cout << "YES\n";
			y++;
			break;
		}
	}
	if (!y) {
		cout << "NO\n";
	}
	return 0;
}