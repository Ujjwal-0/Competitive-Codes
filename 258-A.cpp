#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m;
	cin >> n >> m;
	int cnt = 0;
	while (n >= 1 && m >= 1) {
		n--;
		m--;
		cnt++;
		//cout << "n= " << n << " m= " << m << " count= " << cnt << endl;
	}
	if (cnt % 2 == 0) {
		cout << "Malvika\n";
	}
	else {
		cout << "Akshat\n";
	}
	return 0;
}