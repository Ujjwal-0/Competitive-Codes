#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	char ch[n][n];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> ch[i][j];
		}
	}
	char x = ch[0][0];
	char y = ch[0][1];
	if (x != y) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == j || j == (n - i - 1)) {
					if (x != ch[i][j]) {
						cout << "NO\n";
						return 0;
					}
				}
				else {
					if (y != ch[i][j]) {
						cout << "NO\n";
						return 0;
					}
				}
			}
		}
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}

