#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int a, b, c, sum = 0, product = 0, mix = 0;
	cin >> a >> b >> c;
	product = (a * b * c);

	sum = (a + b + c);
	if ( a >= b && c <= a) {
		mix = a * (b + c);
		cout << max(mix, max(product, sum));
	}
	else if ( b >= c && a <= b) {
		mix = max(((a + b) * c), max(a + (b * c), max(((a * b) + c), (a * (b + c)))));
		cout << max(mix, max(product, sum));
	}
	else if ( c >= b && a <= c) {
		mix = c * (a + b);
		cout << max(mix, max(product, sum));
	}
	return 0;
}