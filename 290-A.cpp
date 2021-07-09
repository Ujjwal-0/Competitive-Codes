#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i % 2 == 1) {
				cout << "#";
			}
			else {
				if (i % 4 == 0 && j == 1) {
					cout << "#";
				}
				else if (i % 4 != 0 && j == m) {
					cout << "#";
				}
				else {
					cout << ".";
				}
			}
		}
		cout << endl;
	}
	return 0;
}