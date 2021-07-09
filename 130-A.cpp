#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	string y = "";
	int i = 0;
	vector<string> v(0);
	while (s[i] != '\0') {
		if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
			if (y.length() != 0) {
				v.push_back(y);
				y = "";
			}
			i += 3;
		}
		else {
			y = y + s[i];
			i++;
		}
	}
	v.push_back(y);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	return 0;
}