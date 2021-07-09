#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int l = -pow(10, 9) * 2;
	int r = pow(10, 9) * 2;
	while (n--) {
		string s;
		int y;
		char ch;
		cin >> s >> y >> ch;
		if ((s == ">=" && ch == 'Y') || (s == "<" && ch == 'N')) l = max(y, l);
		else if ((s == ">" && ch == 'Y') || (s == "<=" && ch == 'N')) l = max(y + 1, l);
		else if ((s == ">=" && ch == 'N') || (s == "<" && ch == 'Y')) r = min(y - 1, r);
		else if ((s == ">" && ch == 'N') || (s == "<=" && ch == 'Y')) r = min(y, r);
	}
	//cout << l << " " << r << endl;
	if (l <= r) {
		cout << l << endl;
	}
	else
		cout << "Impossible\n";
	return 0;
}