#include <stdio.h>

class Base {
public:
	Base() { printf("default constructor\n"); }
	Base(int x) : _x(x) { printf("list constructor\n"); }
	Base(Base &base) { 
		this->_x = base._x;
		printf("copy constructor\n");
	}
	~Base() { printf("deconstructor\n"); }
private:
	int _x;
};

class BaseChild : public Base {
public:
	BaseChild() { printf("BaseChild deconstructor\n"); }
	BaseChild(int y) : _y(y) { printf("BaseChild list constructor\n"); }
private:
	int _y;
};

void Test() {
	Base base_zero;
	Base base_one = {1};
	Base base_two(base_one);
	BaseChild base_child_one;
	Base *pbase = new BaseChild;
}

int main(int argc, char *argv[]) {
	Test();
}
