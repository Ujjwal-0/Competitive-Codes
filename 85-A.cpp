#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string x, y;
	cin >> x >> y;
	int z = 0;
	transform(x.begin(), x.end(), x.begin(), ::tolower);
	transform(y.begin(), y.end(), y.begin(), ::tolower);
	for (int i = 0; i < x.length(); i++) {
		if (x[i] > y[i]) {
			cout << "1\n";
			z = 0;
			break;
		}
		else if (x[i] < y[i]) {
			cout << "-1\n";
			z = 0;
			break;
		}
		else {
			z++;
		}
	}
	if (z) {
		cout << "0\n";
	}

	return 0;
}