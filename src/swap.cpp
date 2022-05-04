#include <stdio.h>

template <typename T>
void Swap(T &lhs, T &rhs) {
	T tmp;
	tmp = lhs;
	lhs = rhs;
	rhs = tmp;
}

int main(int argc, char *argv[]) {
	int a = 1, b = 2;
	printf("old a = %d b = %d\n", a, b);
	Swap<int>(a, b);
	printf("new a = %d b = %d\n", a, b);

	char ca = 'a', cb = 'b';
	printf("old ca = %c cb = %c\n", ca, cb);
	Swap<char>(ca, cb);
	printf("new ca = %c cb = %c\n", ca, cb);
	getchar();
}
