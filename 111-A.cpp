#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n], sum1 = 0, sum2 = 0, p = 1, count = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, greater<int>());
	sum1 = a[0];
	for (int i = 1; i < n; i++) {
		sum2 += a[i];
	}
	//cout << sum1 << " " << sum2;
	if (sum1 > sum2) {
		cout << "1\n";
		return 0;
	}
	else {
		while (sum1 <= sum2) {
			sum1 += a[p];
			sum2 -= a[p];
			//cout << "Sum1= " << sum1 << " Sum2= " << sum2 << endl;
			p++;
			count++;
		}
	}
	cout << count << endl;
	return 0;
}