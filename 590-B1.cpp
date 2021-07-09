#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, k;
	cin >> n >> k;
	vector<int> a(0);
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if (!(count(a.begin(), a.end(), t))) {
			if (a.size() == k) {
				a.erase(a.begin());
			}
			a.push_back(t);
		}
	}
	cout << a.size() << endl;
	reverse(a.begin(), a.end());
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}