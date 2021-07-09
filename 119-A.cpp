#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	int arr[3] = {a, b, c};
	sort(arr, arr + 3);
	a = arr[0];
	b = arr[1];
	c = arr[2];
	int max = 0, x = 0, y = 0, z = 0;
	for (x = 0; x <= n / a; x++) {
		for (y = 0; y <= n / b; y++) {
			if ((n - a * x - b * y) % c == 0 && (n >= a * x + b * y)) {
				z = (n - a * x - b * y) / c;
				if (max < (x + y + z)) {
					max = x + y + z;
					//cout << "x= " << x << " y= " << y << " z= " << z << " max= " << max << endl;
				}
			}
		}
	}
	cout << max << endl;
	return 0;
}