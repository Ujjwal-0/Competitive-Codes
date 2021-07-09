#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int x[n], y[n], t = INT_MIN, cnt;
	int sumX = 0, sumY = 0;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++) {
		sumX += x[i];
		sumY += y[i];
		if ((x[i] % 2 == 1 && y[i] % 2 == 0) || (x[i] % 2 == 0 && y[i] % 2 == 1))
			t = i;
	}
	//cout << sumX << " " << sumY << endl;
	if (sumX % 2 == 0 && sumY % 2 == 0) {
		cout << "0\n";
	}
	else if (n == 1 && (sumX + sumY) % 2 == 1) {
		cout << "-1\n";
	}
	else if (sumX % 2 == 1 && sumY % 2 == 1 && t != INT_MIN) {
		swap(x[t], y[t]);
		cout << "1\n";
	}
	else {
		cout << "-1\n";
	}
	return 0;
}