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
	int n, ans = 0, b;
	cin >> n;
	fr(i, n) {
		int h;
		cin >> h;
		if (i == 0) {
			ans += (h + 1);
		}
		else {
			ans += (2 + abs(h - b));
		}
		b = h;
	}
	cout << ans << "\n";
	return 0;
}