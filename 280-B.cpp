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
	int n, l;
	cin >> n >> l;
	int a[n];
	fr(i, n) {
		cin >> a[i];
	}
	sort(a, a + n);
	int max1 = 0;
	fr(i, n - 1) {
		if (max1 < a[i + 1] - a[i]) max1 = a[i + 1] - a[i];
	}
	if (a[0] != 0) max1 = max(max1, 2 * a[0]);
	if (a[n - 1] != l) max1 = max(max1, 2 * l - 2 * a[n - 1]);
	cout << m / 2;
	if (m %= = 1) cout << ".5000000000" << endl;
	else cout << endl;
	return 0;
}