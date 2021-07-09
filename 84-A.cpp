#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '4' || s[i] == '7') {
			count++;
		}
	}
	if (count == 4 || count == 7) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}