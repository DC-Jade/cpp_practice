#include <stdio.h>

class Student {
public:
	Student()  { printf("default constructor\n"); }
	Student(const int &num, char* name, const char &gender) 
		: _num(num), _name(name), _gender(gender) {
			printf("constructor\n");
	} 
	Student& operator=(const Student &student) {
		this->_num		= student._gender;
		this->_gender = student._num;
		this->_name		= student._name;
		return *this;
		printf("copy\n");
	}
	~Student() { printf("deconstructor\n"); }

	void PrintInfo() { 
		printf("number = %p name = %s gender = %p\n", _num, _name, _gender);
	}


private:
	int  _num;
	char *_name;
	char _gender;
	
};	/* class Student */

void Test() {
	Student stu_a = {1, "student_a", 'M'};
	Student stu_acp;
	stu_acp = stu_a;
	stu_a.PrintInfo();
	stu_acp.PrintInfo();
	printf("end of Test\n");
}


class Point {
public:
	Point() { printf("default constructor\n"); }
	Point(int x, int y) { 
		_x = x; _y = y; ++_count_p;
		printf("list constructor\n"); 
	}
	Point(Point &point); 
	~Point() { printf("Point deconstructor\n"); }
	int		GetX()			{ return _x; }
	int		GetY()			{ return _y; }
	void	GetCount()	{ printf("%d\n", _count_p); }

private:
	int _x, _y;
	static int _count_p;
};	/* class Point	 */

int Point::_count_p = 0;

Point::Point(Point &point) {
	this->_x = point._x;
	this->_y = point._y;
	++_count_p;
	printf("copy constructor\n");
}


void Test2() {
	Point point1;
	point1.GetCount();
	Point point2 = {1, 1};
	point2.GetCount();
	Point point3 = {1, 1};
	point3.GetCount();
	Point point4(point3);
	point4.GetCount();
	printf("end of test2\n");
}


int main(int argc, char **) {
	Test();
	Test2();
	printf("end of main\n");
}
