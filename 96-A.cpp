#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int x = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
			x++;
			break;
		}
	}
	if (x) {
		cout << "YES\n";
	}
	else {
		cout << "NO\n";
	}
	return 0;
}