#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n], i1 = 0, p = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	if (n == 1 && a[0] != p) {
		cout << p << endl;
		return 0;
	}
	else if (n == 1 && a[0] == p) {
		p++;
		cout << p << endl;
		return 0;
	}
	else {
		for (int i = 0; i < n - 1; i++) {
			if (a[0] != p) {
				i1 = p - 1;
				break;
			}
			else if (a[i + 1] - a[i] > 1) {
				i1 = a[i];
				break;
			}
			else {
				i1 = a[i + 1];
			}
		}
	}
	cout << i1 + 1 << endl;
	return 0;
}