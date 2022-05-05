#include <stdio.h>

class Base {
public:
	Base() { ++_base_count; printf("default constructor\n"); }
	Base(int x) : _x(x) { ++_base_count; printf("list constructor\n"); }
	Base(Base &base) { 
		this->_x = base._x;
		++_base_count;
		printf("copy constructor\n");
	}
	~Base() { printf("deconstructor\n"); }

	virtual void BaseFun() { printf("Base virtual function\n"); }
	void GetCount() { printf("_base_count = %d\n", _base_count); }

	static int _base_count; 
private:
	int _x;
};

int Base::_base_count = 0;

class BaseChild : public Base {
public:
	BaseChild() { printf("BaseChild deconstructor\n"); }
	BaseChild(int y) : _y(y) { printf("BaseChild list constructor\n"); }
	void BaseFun() { printf("BaseChild virtual function\n"); }
private:
	int _y;
};

void Test() {
	Base base_zero;
	Base base_one = {1};
	Base base_two(base_one);
	BaseChild base_child_one;
	Base *pbase = new BaseChild;
	base_one.BaseFun();
	base_child_one.BaseFun();
	pbase->BaseFun();
	base_two.GetCount();
}

int main(int argc, char *argv[]) {
	Test();
}
