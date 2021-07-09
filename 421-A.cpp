#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int c, v0, v1, a, l;
	cin >> c >> v0 >> v1 >> a >> l;
	int cnt = 0;
	while (c != 0) {
		if (c == v0) {
			cnt++;
			break;
		}
		c -= v0;
		if (c <= 0) {
			cnt++;
			break;
		}
		c += l;
		v0 = min(v0 + a, v1);
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}