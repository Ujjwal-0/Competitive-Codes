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
	int arr[3][3], sum = 0;
	fr(i, 3) {
		fr(j, 3) {
			cin >> arr[i][j];
		}
	}
	for (int i = 1; i <= 100000; i++) {
		arr[1][1] = i;
		sum = arr[1][0] + arr[1][1] + arr[1][2];
		arr[0][0] = sum - arr[0][1] - arr[0][2];
		arr[2][2] = sum - arr[2][0] - arr[2][1];
		if (arr[0][0] > 0 && arr[2][2] > 0 && (arr[0][0] + arr[1][1] + arr[2][2] == sum)) {
			break;
		}
	}
	fr(i, 3) {
		fr(j, 3) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}