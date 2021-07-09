#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string a, b;
	cin >> a >> b;
	int x = stoi(a);
	int y = stoi(b);
	int c = x + y;
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '0') {
			a.erase(a.begin() + i);
			i--;
		}
	}
	for (int i = 0; b[i] != '\0'; i++) {
		if (b[i] == '0') {
			b.erase(b.begin() + i);
			i--;
		}
	}
	int p = stoi(a);
	int q = stoi(b);
	int d = p + q;
	string ans = to_string(c);
	for (int i = 0; ans[i] != '\0'; i++) {
		if (ans[i] == '0') {
			ans.erase(ans.begin() + i);
			i--;
		}
	}
	d = stoi(ans);
	//cout << x << " " << y << " " << p << " " << q << " " << c << " " << d;

	if ((x + y == c) && (p + q == d))
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}