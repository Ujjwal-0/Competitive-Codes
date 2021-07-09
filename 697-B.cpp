#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, ans = 0;
		cin >> n;
		for (int x = 0; x * 2020 <= n; x++) {
			int temp = n - (x * 2020);
			if (temp % 2021 == 0) {
				cout << "YES\n";
				ans++;
				break;
			}
		}
		if (!ans)
			cout << "NO\n";
	}
	return 0;
}