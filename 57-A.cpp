#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string x, y;
	cin >> x >> y;
	string ans = "";
	for (int i = 0; i < x.length(); i++) {
		if (x[i] == y[i]) {
			ans += "0";
		}
		else {
			ans += "1";
		}
	}
	cout << ans << endl;
	return 0;
}