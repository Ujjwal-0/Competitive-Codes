#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define FIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define ll long long
using namespace std;
int main() {
	FIO;
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int arr[26] = {0}, cnt = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		arr[s[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		//cout << arr[i] << " ";
		if (arr[i] % 2 == 1)
			cnt++;
	}
	if (cnt <= 1)
		cout << "First\n";
	else if (cnt % 2 == 1) {
		cout << "First\n";
	}
	else {
		cout << "Second\n";
	}
	return 0;
}