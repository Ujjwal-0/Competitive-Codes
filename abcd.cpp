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
	//memset(a, 0, sizeof(a));
	for (int i = 0; i < n - 1; i++) {
		a[i] = i;
	}
	//sort(v.begin(), v.end(), greater<int>());
	cout << a[n - 1];
	return 0;
}