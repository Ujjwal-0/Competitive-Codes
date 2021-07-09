#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int d, k;
	cin >> k >> d;
	if (k > 1 && d == 0)
		cout << "No solution";
	else {
		cout << d;
		for (int i = 0; i < k - 1; i++) {
			cout << "0";
		}
	}
	cout << endl;

	return 0;
}