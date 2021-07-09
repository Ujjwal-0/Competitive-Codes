#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int x, y;
	y = s.length();
	sort(s.begin(), s.end());
	for (int i = 0; i < y - 1; i++) {
		if (s[i] == s[i + 1])
			x++;
	}
	if ((y - x) % 2) {
		cout << "IGNORE HIM!" << endl;
	}
	else {
		cout << "CHAT WITH HER!" << endl;
	}
	return 0;
}