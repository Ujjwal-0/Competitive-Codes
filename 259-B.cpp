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
	int n;
	cin >> n;
	int arr[n];
	fr(i, n) cin >> arr[i];
	if (n == 2) {
		if (arr[0] > arr[1]) { cout << "1\n";  }
		else cout << "0\n";
		return 0;
	}
	int index = -1;
	for (int j = 0; j < n - 1; j++) {
		if (arr[j] > arr[j + 1]) {
			index = j;
			break;
		}
	}
	if (index == -1) {
		cout << "0\n";
		return 0;
	}
	int c = 1;
	for (int i = index + 1; i < n - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			c = 0;
			break;
		}
	}
	if (c == 0) cout << "-1\n";
	else {
		if (arr[n - 1] <= arr[0]) cout << n - index - 1 << "\n";
		else cout << "-1\n";
	}
	return 0;
}