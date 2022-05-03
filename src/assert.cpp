#define NDEBUG  // should be in front of <assert.h>
#include <stdio.h>
#include <assert.h>

/* printf("hello, world"); */
/* printf("hello, world"); */
/* printf("hello, world"); */

int main() {
	int i = 1;	/* i is an int */
	scanf("%d", &i);
	assert(i > 0);
	printf("bug free");
	return 0;
}
