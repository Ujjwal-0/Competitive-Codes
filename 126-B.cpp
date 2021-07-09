#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n];
	double sum = 0, ans;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	ans = sum / n;
	cout << fixed << setprecision(12) << ans << "\n";
	return 0;
}