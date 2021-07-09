#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int r, c;
	cin >> r >> c;
	int t, arr[r][c], o = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			arr[i][j] = -1;
		}
	}
	for (int i = 0; i < r; i++) {
		cin >> t;
		if (t == 0) {
			arr[i][0] = 0;
			o++;
		}
		else {
			for (int j = 0; j < t; j++) {
				arr[i][j] = 1;
				o++;
			}
			if (t != c) { arr[i][t] = 0; o++; }
		}
	}
	for (int i = 0; i < c; i++) {
		cin >> t;
		if (t == 0) {
			if (arr[0][i] == 1) { cout << 0 << endl; return 0; }
			if (arr[0][i] == -1) { arr[0][i] = 0; o++; }
		}
		else {
			for (int j = 0; j < t; j++) {
				if (arr[j][i] == 0) { cout << 0 << endl; return 0; }
				if (arr[j][i] == -1) { arr[j][i] = 1; o++; }
			}
			if (t != r) {
				if (arr[t][i] == 1) { cout << 0 << endl; return 0; }
				if (arr[t][i] == -1) { arr[t][i] = 0; o++; }
			}
		}
	}
	long long int p = 1000000007;
	int x = 2, n = (r * c) - o;
	long long int mod[n + 1];
	mod[0] = 1;
	mod[1] = x % p;
	for (long long int i = 2; i <= n; i++) {
		if (i & 1) mod[i] = (mod[(i - 1) / 2] * mod[(i + 1) / 2]) % p;
		else mod[i] = (mod[i / 2] * mod[i / 2]) % p;
	}
	cout << mod[n] << endl;
	return 0;
}