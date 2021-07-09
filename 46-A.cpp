#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	getline(cin, s);
	int x = s.length();
	char q;
	char ch[12] = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'};
	for (int i = x - 1; i >= 0; i--) {
		if ((s[i] >= 65 && s[i] < 91) || (s[i] >= 97 && s[i] < 123)) {
			q = s[i];
			break;
		}
	}
	for (int i = 0; i < 12; i++) {
		if (q == ch[i]) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";
	return 0;
}