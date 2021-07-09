#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int ans1 = 0, ans2 = 0;
	ans1 = max((3 * a) / 10, (a - (a / 250) * c));
	ans2 = max((3 * b) / 10, (b - (b / 250) * d));
	if (ans1 > ans2) {
		cout << "Misha\n";
	}
	else if (ans2 > ans1) {
		cout << "Vasya\n";
	}
	else {
		cout << "Tie\n";
	}
	return 0;
}