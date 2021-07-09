#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	set<int, greater<int>> p;
	p.insert(s1);
	p.insert(s2);
	p.insert(s3);
	p.insert(s4);
	int x = p.size();
	cout << 4 - x << "\n";
	return 0;
}