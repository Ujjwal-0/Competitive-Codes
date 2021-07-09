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
	double n, k, a, b, ds, x, y;
	cin >> n >> k;
	cin >> a >> b;
	n--;
	ds = 0;
	while (n--) {
		cin >> x >> y;
		ds += sqrt((x - a) * (x - a) + (y - b) * (y - b));
		a = x;
		b = y;
	}
	cout << fixed << setprecision(10) << k*ds / 50.0 << endl;
	return 0;
}