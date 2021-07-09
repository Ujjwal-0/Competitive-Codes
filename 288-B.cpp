#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define llu long long unsigned
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int l = s.length();
	int p = 0, q = 0;
	for (int i = 0; i < l - 1; i++) {
		if (s[i] % 2 == 0 && s[i] < s[l - 1]) {
			swap(s[i], s[l - 1]);
			p++;
			break;
		}
	}
	if (p == 0) {
		for (int i = l - 1; i >= 0; i--) {
			if (s[i] % 2 == 0) {
				swap(s[i], s[l - 1]);
				q++;
				break;
			}
		}
	}
	if (p == 0 && q == 0) {
		cout << "-1\n";
	}
	else
		cout << s << endl;
	return 0;
}