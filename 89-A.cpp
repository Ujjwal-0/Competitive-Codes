#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for (int i = 0; s[i] != '\0'; i++) {
		if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y') {
			cout << "." << s[i];
		}
	}
	cout << endl;
	return 0;
}