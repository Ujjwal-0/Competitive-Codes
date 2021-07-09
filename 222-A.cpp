#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int a, b, cnt1 = 0, cnt2 = 0;
	cin >> a >> b;
	for (int i = 1; i <= 6; i++) {
		if (abs(a - i) < abs(b - i)) {
			cnt1++;
		}
		else if (abs(b - i) < abs(a - i)) {
			cnt2++;
		}
	}
	cout << cnt1 << " ";
	if (a == b) {
		cout << "6 ";
	}
	else if (abs(b - a) % 2 == 0) {
		cout << "1 ";
	}
	else
		cout << "0 ";
	cout << cnt2 << endl;
	return 0;
}