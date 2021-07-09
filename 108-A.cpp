#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	string arr[n];
	int best[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		best[i] = 0;
	}
	for (int i = 0; i < m; i++) {
		int max = 0;
		for (int j = 0; j < n; j++) {
			if (max < (int)arr[j][i])
				max = (int)arr[j][i];
		}
		for (int j = 0; j < n; j++) {
			if ((int)arr[j][i] == max)
				best[j] = 1;
		}
	}
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += best[i];
	}
	cout << sum << endl;
	return 0;
}