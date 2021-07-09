#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	long long unsigned int k, l;
	int count = 0, p = 0;
	cin >> k >> l;
	double x = (double)l;
	while (x > 1) {
		x = x / (double)k;
		//cout << x << " ";
		if ( x != (int)x) {
			p++;
			break;
		}
		//cout << l << " ";
		count++;
	}
	if (x == 1 && p == 0) {
		cout << "YES\n";
		cout << count - 1 << endl;
	}
	else {
		cout << "NO\n";
	}
	return 0;
}