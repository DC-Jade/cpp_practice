#include <iostream>
#include <stdio.h>

using std::cin;
using std::cout;

int main(int argc, const char *argv[]) {
	int i, j, k, f;
	for (i = 1; i <= 4; ++i) {
		for (j = 1; j <= 30; ++j) 
			cout << " ";
		for (k = 1; k <= 8 - 2*i; ++k)
			cout << " ";
		for (f = 1; f <= 2*i; ++f) 
			cout << "*";
		cout << std::endl;
	}
	printf("%d\n", j + k + f - 1);
	for (int i; i <=3; ++i) {
		for (j = 1; j <= 30; ++j)
			cout << " ";
		for (f = 1; f <= 7 - 2*i; ++f)
			cout << "*";
		cout << std::endl;
	}
	getchar();
	return 0;
}
