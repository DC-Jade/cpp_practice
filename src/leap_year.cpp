#include <iostream>
#include <stdio.h>


int IsLeapYear(const int *year) {
	int ans;
	ans = ((*year % 4 == 0 && *year % 100 != 0) || *year % 400 == 0);
	return ans;
}

void test() {
	int i;
	while (scanf("%d", &i))
		IsLeapYear(&i) ? printf("%d leapyear\n", i)
									 : printf("%d not leapyear\n", i);
}

int main(int argc, char *argv[]) {
	test();
}
