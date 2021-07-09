#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
string chf(int x1) {
	char arr[32] = {'0'};
	fr(i, 32) arr[i] = '0';
	int i = 0;
	while (x1 != 0) {
		if (x1 % 2 == 1) arr[i] = '1';
		i++;
		x1 /= 2;
	}
	string s = "";
	fr(i, 32) {
		s += arr[31 - i];
	}
	return s;
}
int cf(string s1, int x2, int k) {
	string s2 = chf(x2);
	int t = 0;
	fr(i, 32) {
		if (s1[i] != s2[i]) t++;
		if (t > k) return 0;
	}
	return 1;
}
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m, k, ans = 0;
	cin >> n >> m >> k;
	int arr[m];
	fr(i, m) {
		cin >> arr[i];
	}
	int x1;
	cin >> x1;
	string s1 = chf(x1);
	fr(i, m) {
		if (cf(s1, arr[i], k)) ans++;
	}
	cout << ans << endl;
	return 0;
}