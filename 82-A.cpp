#include <bits/stdc++.h>
using namespace std;
int check(char arr[], char x) {
	for (int i = 0; i < 9; i++) {
		if (x == arr[i]) return i;
	}
	return 0;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	char t;
	cin >> t;
	char a, b, c, d;
	cin >> a >> b >> c >> d;
	char arr[9] = {'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};
	if (b == t && d != t) {
		cout << "YES\n";
	}
	else if ( b == d && (check(arr, a) > check(arr, c))) {
		cout << "YES\n";
	}
	else
		cout << "NO\n";
	return 0;
}