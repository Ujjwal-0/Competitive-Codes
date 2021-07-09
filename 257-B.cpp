#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define mod 1000000007
using namespace std;
long long int mo(long long int a) {
	if (a < 0) return mo((a + mod) % mod);
	else return a % mod;
}
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	long long  int x, y, n;
	cin >> x >> y >> n;
	long long  int arr[6] = {x, y, y - x, -x, -y, x - y};
	long long int a = arr[(n - 1) % 6];
	cout << mo(a) << "\n";
	return 0;
}