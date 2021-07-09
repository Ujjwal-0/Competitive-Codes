#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	vector<int> v;
	for (int i = 0; i < s.length(); i += 2) {
		v.push_back(s[i]);
	}
	sort(v.begin(), v.end());
	string ans = "";
	for (int i = 0; i < v.size(); i++) {
		ans += v[i];
		ans.append("+");
	}
	ans.pop_back();
	cout << ans << "\n";
	return 0;
}