#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x;
	cin >> x;
	int a[3] = {1, 2, 3};
	int p = 0, q = 0;
	for (int i = 0; i < 3; i++) {
		cin >> p >> q;
		swap(a[p - 1], a[q - 1]);
	}
	for (int i = 0; i < 3; i++) {
		if (a[i] == x) {
			cout << i + 1;
			break;
		}
	}
	cout << endl;
	return 0;
}