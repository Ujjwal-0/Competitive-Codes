#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, d, ans = 0, chk = 0, cnt = 0;
	cin >> n >> d;
	int t[n], p;
	for (int i = 0; i < n; i++) {
		cin >> t[i];
	}
	for (int i = 0; i < n; i++) {
		if (i != n - 1) {
			ans += t[i] + 10;
			if (ans > d) {
				chk++;
				break;
			}
			cnt += 2;
		}
		else {
			ans += t[i];
			if (ans > d) {
				chk++;
				break;
			}
		}
	}
	p = d - ans;
	p = p / 5;
	cnt += p;
	if (chk) {
		cout << "-1\n";
	}
	else {
		cout << cnt << endl;
	}
	return 0;
}