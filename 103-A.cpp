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
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int min = a[0], p = 0, q = 0, s1 = 0, s2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] <= min) {
			min = a[i];
			p = i;
		}
	}
	//cout << "Min= " << min << endl;
	if (p != n - 1) {
		for (int i = p; i < n - 1; i++) {
			swap(a[i], a[i + 1]);
			s1++;
		}
	}

	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			q = i;
		}
	}
	//cout << "Max= " << max << endl;
	if (q != 0) {
		for (int i = q; i > 0; i--) {
			swap(a[i], a[i - 1]);
			s2++;
		}
	}
	cout << s1 + s2 << endl;
	return 0;
}

//--->10 10 58 31 63 40 76

