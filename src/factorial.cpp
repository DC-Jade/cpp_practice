#include <stdio.h>

int Factorial(int n) {
	if (n == 1) { return 1; }
	else return n * Factorial(n - 1);
}

int main(int argc, char *argv[]) {
	int n;
	int ans;
	while (scanf("%d", &n)) {
		ans = Factorial(n);
		printf("Factorial(%d) = %d\n", n, ans);
	}
}
