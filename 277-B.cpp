#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int m, n;
	cin >> m >> n;
	int arr[m][n], b[m][n];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			b[i][j] = 1;
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 0) {
				for (int k = 0; k < m; k++) b[k][j] = 0;
				for (int k = 0; k < n; k++) b[i][k] = 0;
			}
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1) {
				int c = 0;
				for (int k = 0; k < m; k++) {
					if (b[k][j]) { c = 1; goto j;}
				}
				for (int k = 0; k < n; k++) {
					if (b[i][k]) {c = 1; break;}
				}
j:
				if (c == 0) {cout << "NO\n"; return 0;}
			}
		}
	}
	cout << "YES\n";
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}