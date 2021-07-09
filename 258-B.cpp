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
	int n;
	cin >> n;
	int a[n], b[n];
	fr(i, n) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b, b + n);
	int p = 0, x = 0, y = n - 1;
	fr(i, n) {
		if (a[i] == b[i]) x++;
		else break;
	}
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == b[i]) y--;
		else break;
	}
	if (x > y) { cout << "yes\n" << 1 << " " << 1 << endl; return 0; }
	for (int i = y; i >= x; i--) {
		if (a[i] != b[x + y - i]) {
			cout << "no\n";
			return 0;
		}
	}
	cout << "yes\n";
	cout << x + 1 << " " << y + 1 << endl;
	return 0;
}