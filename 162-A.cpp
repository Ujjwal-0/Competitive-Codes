#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s, t;
	cin >> s >> t;
	int j = 0;
	for (int i = 0; t[i] != '\0'; i++) {
		if (t[i] == s[j]) {
			j++;
		}
	}
	cout << j + 1 << endl;
	return 0;
}