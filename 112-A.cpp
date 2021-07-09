#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, cnt = 0;
	cin >> n;
	int a[n][2];
	for (int i = 0; i < n; i++) {
		cin >> a[i][0] >> a[i][1];
	}
	for (int i = 0; i < n; i++) {
		int l = 0, r = 0, u = 0, d = 0;
		for (int j = 0; j < n; j++) {
			if (a[i][0] == a[j][0] && a[i][1] > a[j][1]) d = 1;
			if (a[i][0] == a[j][0] && a[i][1] < a[j][1]) u = 1;
			if (a[i][1] == a[j][1] && a[i][0] > a[j][0]) l = 1;
			if (a[i][1] == a[j][1] && a[i][0] < a[j][0]) r = 1;
		}
		if (l && d && u && r)
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}