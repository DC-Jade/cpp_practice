#include <stdio.h>

void Test() {
	int i = 1;
	int *p1 = &i;
	int **p2 = &p1;
}
int main() {
	Test();


