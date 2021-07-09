#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define llu long long unsigned
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int k, max = 0;
	long long int value = 0;
	cin >> k;
	int arr[26];
	fr(i, 26) {
		cin >> arr[i];
	}
	for (int i = 0; s[i] != '\0'; i++) {
		value += ((i + 1) * (arr[s[i] - 'a']));
	}
	for (int i = 0; i < 26; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	for (int i = s.length() + 1; i <= (s.length() + k); i++) {
		value += (i * max);
	}
	cout << value << endl;
	return 0;
}