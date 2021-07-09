#include <bits/stdc++.h>
using namespace std;
#define llu long long unsigned
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	llu l = 0, r = 0, p = 0;
	for (llu int i = 0; s[i] != '\0'; i++) {
		if (s[i] == '^') {
			p = i;
		}
	}
	for (llu int i = 0; s[i] != '\0'; i++) {
		if (i < p && (s[i] >= 48 && s[i] <= 57)) {
			l += (s[i] - '0') * (p - i);
		}
		else if (i > p && (s[i] >= 48 && s[i] <= 57)) {
			r += (s[i] - '0') * (i - p);
		}
	}
	if (l == r) {
		cout << "balance\n";
	}
	else if (l > r)
		cout << "left\n";
	else
		cout << "right\n";

	return 0;
}