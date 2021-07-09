#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	vector<pair<int, char>> l;
	l.push_back({s1.length() - 2, 'A'});
	l.push_back({s2.length() - 2, 'B'});
	l.push_back({s3.length() - 2, 'C'});
	l.push_back({s4.length() - 2, 'D'});
	sort(l.begin(), l.end());

	int x = 1, y = 1;
	for (int i = 0; i < 3; i++) {
		if (2 * l[i].first > l[3].first) x = 0;
	}
	for (int i = 1; i < 3; i++) {
		if (l[i].first < 2 * l[0].first) y = 0;
	}

	if (x == 1 && y == 0) cout << l[3].second << endl;
	else if (x == 0 && y == 1) cout << l[0].second << endl;
	else cout << "C\n";
	return 0;
}