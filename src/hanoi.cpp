#include <stdio.h>

void Move(char A, char B);
void Hanoi(int n, char A, char B, char C);

void Test() {
	printf("hello, it's hanoi\n");
	int disk;
	scanf("%d", &disk);
	Hanoi(disk, 'A', 'B', 'C');
	getchar();
}


int main() {
	Test();
}

void Move(char A, char B) {
	printf("A -> B: %d %d\n", A, B);
}

void Hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		Move(A, C);
	} else {
		Hanoi(n - 1, A, C, B);
		Move(A, C);
		Hanoi(n - 1, B, A, C);
	}
}
