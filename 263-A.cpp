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
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> ch[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (ch[i + 1][j] == 'o' && i != n - 1) {
				cnt++;
			}
			if (ch[i - 1][j] == 'o' && i != 0) {
				cnt++;
			}
			if (ch[i][j + 1] == 'o' && j != n - 1) {
				cnt++;
			}
			if (ch[i][j - 1] == 'o' &&  j != 0) {
				cnt++;
			}
			if (cnt % 2 == 1) {
				cout << "NO\n";
				return 0;
			}
			else {
				cnt = 0;
			}
		}
	}
	cout << "YES\n";
	return 0;
}