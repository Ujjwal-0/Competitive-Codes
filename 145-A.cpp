#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	string s;
	cin >> s;
	for (int i = 0; i < n / 2; i++) {
		if (s[i] == 'R') {
			cout << n / 2 + i + 1 << " " << i + 1 << endl;
		}
		else
			cout << i + 1 << " " << n / 2 + i + 1 << endl;
	}
	return 0;
}