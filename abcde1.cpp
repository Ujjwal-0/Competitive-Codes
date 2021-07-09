#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		int n, cnt1 = 0, cnt2 = 0, p = 0;
		cin >> n;
		string s;
		for (int i = 0; i < n; i++) {
			cin >> s;
			if (s == "start") cnt1++;
			else if (s == "stop") cnt2++;
			else if ((cnt1 == 0 || cnt1 == cnt2) && s == "restart") cnt1++;
			if ((cnt2 > cnt1)) {
				cout << "404\n";
				p++;
				break;
			}
		}
		if (p != 0)
			continue;
		else
			cout << "200\n";
	}
	return 0;
}