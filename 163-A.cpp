#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, count = 0;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n - 1; i++) {
		if (s[i + 1] == s[i]) {
			count++;
		}
	}
	cout << count << endl;
}