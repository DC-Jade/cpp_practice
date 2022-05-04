#include <stdio.h>

int Reverse(int n, int k) {
	if (n == k || k == 0) return 1;
	else return Reverse(n - 1, k - 1) + Reverse(n - 1, k);
}

int main(int argc, char *argv[]) {
	int n, k, ans;
	while (scanf("%d %d", &n, &k)) {
		ans = Reverse(n, k);
		printf("%d\n", ans);
	}
}
