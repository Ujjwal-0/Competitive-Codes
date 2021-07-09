#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	getline(cin, s);
	int n = s.length() - 1;
	int b[26] = {0};
	int cnt = 0;
	int i = 0;
	set<char> st;
	while (i < n) {
		st.insert(s[i]);
		i++;
	}
	for (auto itr = st.begin(); itr != st.end(); itr++) {
		if ((*itr) >= 97 && (*itr) <= 122) {
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}