#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int a, b, r;
	cin >> a >> b >> r;
	int m = min(a, b);
	if (m >= 2 * r) {
		cout << "First\n";
	}
	else
		cout << "Second\n";
	return 0;
}