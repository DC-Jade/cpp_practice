#include <stdio.h>

enum class Color {
	RED = 2, YELLOW, BLUE
};

int c2 = static_cast<int>(Color::RED);

class Person {
public:
	//typedef enum {
	enum {
		BOY = 0, GIRL, OTHER
	};
};

void Test1() {
	printf("%d\n", c2);
}

void Test2() {
	printf("%d %d %d\n", Person::BOY, Person::GIRL, Person::OTHER);
}

int main() {
	Test1();
	Test2();
}

