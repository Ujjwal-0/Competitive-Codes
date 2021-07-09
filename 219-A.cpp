#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int k;
	cin >> k;
	char ch[4][4];
	int a[10] = {0};
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> ch[i][j];
		}
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (ch[i][j] >= 49 && ch[i][j] <= 57) {
				a[ch[i][j] - '0']++;
			}
		}
	}
	for (int i = 1; i <= 9; i++) {
		//cout << a[i] << " ";
		if (a[i] > (2 * k)) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}