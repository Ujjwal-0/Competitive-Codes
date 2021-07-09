#include <stdio.h>
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	int n, m, cnt1 = 0, cnt2 = 0, t, l, r;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &t);
		if (t == -1)
			cnt1++;
	}
	cnt2 = (n - cnt1);
	while (m--) {
		scanf("%d %d", &l, &r);
		if (n == 1 || l == r) {
			printf("0\n");
			continue;
		}
		int d = r - l + 1;
		if (d % 2 == 0 && cnt1 >= d / 2 && cnt2 >= d / 2) {
			printf("1\n");
		}
		else
			printf("0\n");
	}
	return 0;
}