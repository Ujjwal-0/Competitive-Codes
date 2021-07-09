#include <bits/stdc++.h>
using namespace std;
int check(int k) {
	k = (k >= 0) ? k : -k;
	while (k != 0) {
		if (k % 10 == 8) return 1;
		k = k / 10;
	}
	return 0;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, i = 1;
	cin >> n;
	while (!check(n + i)) {
		i++;
	}
	cout << i << endl;
	return 0;
}