#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int s, n;
	cin >> s >> n;
	int a, b, chk = 0;
	multimap <int, int> m;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		m.insert({a, b});
	}
	for (auto itr = m.begin(); itr != m.end(); itr++) {
		if (s > (itr->first)) {
			s += (itr->second);
			//cout << s << " ";
		}
		else {
			chk++;
			break;
		}
	}
	if (chk) {
		cout << "NO\n";
	}
	else {
		cout << "YES\n";
	}
	return 0;
}