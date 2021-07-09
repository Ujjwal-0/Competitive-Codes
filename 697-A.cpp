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
		long long int n;
		cin >> n;
		while (n % 2 == 0) n /= 2;
		if (n > 1) {
			cout << "YES";
		}
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}