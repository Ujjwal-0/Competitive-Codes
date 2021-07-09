#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	int a, b, c;
	a = sqrt((s1 * s3) / s2);
	b = sqrt((s1 * s2) / s3);
	c = sqrt((s2 * s3) / s1);
	cout << 4 * (a + b + c);
	return 0;
}