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
	int n, m, k = 0;
	cin >> n >> m;
	string arr1[m], arr2[m];
	string t;
	fr(i, m) {
		cin >> arr1[i] >> arr2[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> t;
		for (int j = 0; j < m; j++) {
			if (arr1[j] == t || arr2[j] == t) {
				k = j;
				break;
			}
		}
		if (arr1[k].length() <= arr2[k].length())
			t = arr1[k];
		else
			t = arr2[k];
		cout << t << " ";
	}
	cout << endl;
	return 0;
}