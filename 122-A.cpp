#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, k;
	cin >> n >> k;
	if (k < 3 * n) {
		cout << (3 * n - k) << endl;
	}
	else
		cout << "0\n";
	return 0;
}