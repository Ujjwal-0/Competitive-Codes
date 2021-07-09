#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define llu long long unsigned
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int x, h, m, ans = 0;
	cin >> x >> h >> m;
	while (1) {
		if (h % 10 == 7 || m % 10 == 7) {
			cout << ans << "\n";
			break;
		}
		m -= x;
		if (m < 0) {
			m += 60;
			h--;
		}
		if (h < 0) {
			h += 24;
		}
		ans++;
	}
	return 0;
}