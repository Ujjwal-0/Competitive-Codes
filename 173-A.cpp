#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, x = 0;
	cin >> n;
	for (int j = 0; j < n; j++) {
		string s;
		cin >> s;
		for (int i = 0; s[i] != '\0'; i++) {
			if (s[i] == '+' && s[i + 1] == '+') {
				x++;
				i++;
				break;
			}
			else if (s[i] == '-' && s[i + 1] == '-') {
				x--;
				i++;
				break;
			}
		}
	}
	cout << x << endl;
	return 0;
}