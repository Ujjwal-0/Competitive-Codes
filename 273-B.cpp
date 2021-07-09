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
	int n, m;
	cin >> n >> m;
	llu int max = (n - m + 1);
	max = max * (max - 1) / 2;
	llu int t = n / m;
	llu int min = n % m * (t * (t + 1) / 2) + (m - n % m) * (t * (t - 1) / 2);
	cout << min << " " << max << endl;
	return 0;
}