#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int h = 0, e = 0, l = 0, o = 0;

	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'h') {
			h = 1;
		}
		if (s[i] == 'e' && h == 1) {
			e = 1;
		}
		if (s[i] == 'l' && e == 1) {
			l++;
		}
		if (s[i] == 'o' && l == 2) {
			o = 1;
		}
	}
	if (h + e + l + o >= 5) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}

	return 0;
}