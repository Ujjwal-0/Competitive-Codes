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
	int q;
	cin >> q;
	while (q--) {
		int n, p = 0;
		cin >> n;
		int arr[n];
		fr(i, n) cin >> arr[i];
		sort(arr, arr + n);
		fr(i, n - 1) {
			if (arr[i + 1] - arr[i] == 1) { p = 1; break; }
		}
		if (p) cout << "2\n";
		else cout << "1\n";
	}
	return 0;
}