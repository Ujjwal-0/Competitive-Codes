#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i1 = 0, i2 = 0, i3 = 0, i4 = 0;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'R') {
			i1 = i;
			break;
		}
	}
	for (int i = i1; i < n; i++) {
		if (s[i] == 'L') {
			i2 = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == 'L') {
			i3 = i;
			break;
		}
		if (s[i] == 'R') {
			i4 = i;
			break;
		}
	}
	if (i1 != 0 && i2 != 0) cout << i1 + 1 << " " << i2 << endl;
	else if (i1 == 0) cout << i3 + 1 << " " << i2 << endl;
	else if (i2 == 0) cout << i1 + 1 << " " << i4 + 2 << endl;
	return 0;
}