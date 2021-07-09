#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define llu long long unsigned
using namespace std;
int prime(long long int n) {
	if (n == 2)
		return 1;
	if (n % 2 == 0 || n == 1)
		return 0;
	for (int i = 3; i * i <= n; i += 2) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}
long long int sqr(long long int n) {
	if (n == 1 || n == 0)
		return 0;
	long long int l = 1, u = n / 2, mid;
	while (l <= u) {
		mid = (l + u) / 2;
		long long unsigned int x = mid * mid;
		if (x == n) return mid;
		else if (x > n) {
			u = mid - 1;
		}
		else {
			l = mid + 1;
		}
	}
	return 0;
}
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	long long int t, y = 0;
	fr(i, n) {
		cin >> t;
		y = sqr(t);
		if (y) {
			if (prime(y)) {
				cout << "YES\n";
			}
			else
				cout << "NO\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}