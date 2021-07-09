#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int n = 0, i = 0, e = 0, t = 0;
	for (int j = 0; s[j] != '\0'; j++) {
		if (s[j] == 'n') n++;
		else if (s[j] == 'i') i++;
		else if (s[j] == 'e') e++;
		else if (s[j] == 't') t++;
	}
	int x = min(i, min(t, e / 3));
	if (n >= (2 * x) + 1)
		cout << x << endl;
	else
		cout << (n - 1) / 2 << endl;

	return 0;
}