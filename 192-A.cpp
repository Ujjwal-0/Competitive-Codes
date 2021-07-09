#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int r, c;
	cin >> r >> c;
	char ch[r][c];
	set<int> v1, v2;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> ch[i][j];
			if (ch[i][j] == 'S') {
				v1.insert(i);
				v2.insert(j);
			}
		}
	}
	int r1 = r - v1.size();
	int c1 = c - v2.size();
	int ans = ((r1 * c) + (c1 * r) - (r1 * c1));
	//cout << r1 << " " << c1 << " ";
	cout << ans << endl;
	return 0;
}