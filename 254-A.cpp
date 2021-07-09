#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	char ch[n + 1][m + 1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> ch[i][j];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (ch[i][j] == '.') {
				if (i == j)
					cout << "B";
				else if (i % 2 == 1 && j % 2 == 0)
					cout << "W";
				else if (i % 2 == 0 && j % 2 == 0)
					cout << "B";
				else if (i % 2 == 0 && j % 2 == 1)
					cout << "W";
				else
					cout << "B";
			}
			else
				cout << "-";
		}
		cout << endl;
	}
	return 0;
}