#include <stdio.h>

void Fun(int n) {
	try { if(n == 0) { throw "exception"; } }
	catch(...) { printf("in Fun\n"); throw 1; }
}

int main(int argc, char *argv[]) {
	try { Fun(0); }
	catch(int n) { printf("in main\n"); }
	getchar();
	return 0;
}
