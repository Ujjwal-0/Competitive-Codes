#include <bits/stdc++.h>
using namespace std;
int check(string arr[], string x) {
	for (int i = 0; i < 12; i++) {
		if (x == arr[i])
			return 1;
	}
	return 0;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, b = 0, t, c = 0;
	cin >> n;
	string s;
	string a[11] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
	for (int i = 0; i < n; i++) {
		b = 0;
		cin >> s;
		for (int j = 0; s[j] != '\0'; j++) {
			if (!isdigit(s[j])) {
				b = 1;
				break;
			}
		}
		if (b == 0) {
			t = stoi(s);
			if (t < 18) c++;
		}
		else if (check(a, s)) {
			c++;
		}
	}
	cout << c << endl;
	return 0;
}