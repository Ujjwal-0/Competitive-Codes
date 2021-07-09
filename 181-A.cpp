#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int a[n], x = 0, y = 0;
	vector<int> p, q, r;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			p.push_back(a[i]);
		}
		else if (a[i] > 0) {
			q.push_back(a[i]);
		}
		else {
			r.push_back(a[i]);
		}
	}
	x = p[p.size() - 1];
	y = p[p.size() - 2];
	if (p.size() % 2 == 0) {
		p.pop_back();
		r.push_back(x);
	}
	x = p[p.size() - 1];
	y = p[p.size() - 2];
	if (q.size() == 0 && p.size() % 2 == 1) {
		p.pop_back();
		q.push_back(x);
		p.pop_back();
		q.push_back(y);
	}
	cout << p.size() << " ";
	for (auto i = p.begin(); i != p.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	cout << q.size() << " ";
	for (auto i = q.begin(); i != q.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	cout << r.size() << " ";
	for (auto i = r.begin(); i != r.end(); i++) {
		cout << *i << " ";
	}
	cout << endl;
	return 0;
}