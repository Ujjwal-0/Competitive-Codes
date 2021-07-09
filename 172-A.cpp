#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	string s;
	cin >> s;
	if ((int)s[0] > 90 ) {
		s[0] = toupper(s[0]);
	}
	cout << s << endl;
}