#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, l, u, c = 0;
	cin >> n >> l >> u;
	int arr[100] = {0};
	for (int i = l; i < u; i++) {
		arr[i] = 1;
	}
	n--;
	for (int i = 0; i < n; i++) {
		int lt, ut;
		cin >> lt >> ut;
		if (lt < l) lt = l;
		if (ut > u) ut = u;
		for (int j = lt; j < ut; j++) arr[j] = 0;
	}
	for (int i = 0; i < 100; i++) {
		if (arr[i] == 1) c++;
	}
	cout << c << endl;
	return 0;
}