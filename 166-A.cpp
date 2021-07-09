#include <bits/stdc++.h>
using namespace std;
int main() {

#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif

	int y;
	cin >> y;
	y++;

	for (int i = 0; i < 1000; i++) {
		int num = y;
		int a, b, c, d;
		a = num % 10;
		num = num / 10;
		b = num % 10;
		num = num / 10;
		c =  num % 10;
		num = num / 10;
		d = num % 10;
		if (a != b && b != c && c != d && a != d && b != d && a != c) {
			cout << y << endl;
			break;
		}
		else {
			y++;
		}
	}
	return 0;
}