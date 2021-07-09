#include <bits/stdc++.h>
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
int num(string x[], string a) {
	for (int i = 0; i < 12; i++) {
		if (x[i] == a) return i;
	}
	return -1;
}
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string a, b, c;
	cin >> a >> b >> c;
	string x[12] = {"C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
	int d1 = 1, d2 = 1, d3 = 1;
	int i = num(x, a);
	while (x[(i + d1) % 12] != b) d1++;
	i = (i + d1) % 12;
	while (x[(i + d2) % 12] != c) d2++;
	i = (i + d2) % 12;
	while (x[(i + d3) % 12] != a) d3++;
	if ((d1 == 4 && d2 == 3) || (d2 == 4 && d3 == 3) || (d1 == 8 && d3 == 9) || (d3 == 8 && d2 == 9) || (d2 == 8 && d1 == 9) || (d3 == 4 && d1 == 3)) {
		cout << "major\n";
	}
	else if ((d1 == 3 && d2 == 4) || (d2 == 3 && d3 == 4) || (d1 == 9 && d3 == 8) || (d3 == 9 && d2 == 8) || (d2 == 9 && d1 == 8) || (d3 == 3 && d1 == 4)) {
		cout << "minor\n";
	}
	else {
		cout << "strange\n";
	}
	return 0;
}