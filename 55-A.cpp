#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int a = 0, b = 0;
	for (int i = 0; i < s.length(); i++) {
		if (isupper(s[i])) {
			a++;
		}
		else {
			b++;
		}
	}
	if (b >= a) {
		transform(s.begin(), s.end(), s.begin(), ::tolower);
	}
	else {
		transform(s.begin(), s.end(), s.begin(), ::toupper);
	}
	cout << s << endl;
	return 0;
}