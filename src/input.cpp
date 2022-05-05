#include <stdio.h>

void Test() {
	int a;
	while ((a = getchar()) != EOF) { putchar(a); }
	printf("end of Test\n");
}

void TestEof() {
	int n;
	int ans = -1;
	while (n = getchar()) {
		if (n == '\n') continue;
		ans = (n != EOF) ? 1 : 0;
		/* ans = ans + '0'; */
		ans = ans + 48;
		putchar(ans);
		printf("\n");
	}
	printf("end of TestEof\n");
}

void PrintEof() {
	int n = EOF;
	printf("%d\n", n);
}

int main() {
	/* Test(); */
	TestEof();
	/* PrintEof(); */
}
