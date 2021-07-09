#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string x, y;
	cin >> x >> y;
	int a[26] = {0}, b[26] = {0};
	for (int i = 0; x[i] != '\0'; i++) {
		a[x[i] - 'a']++;
	}
	for (int j = 0; y[j] != '\0'; j++) {
		b[y[j] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (a[i] != b[i]) {
			cout << "NO\n";
			return 0;
		}
	}
	int c = 0;
	for (int i = 0; i < x.length(); i++) {
		if (x[i] != y[i]) c++;
	}
	if (c == 2) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}