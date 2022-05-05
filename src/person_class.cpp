#include <stdio.h>

class Person {
public:
	double _salary;
	char *_name;
};	/* class Person */

class SalaryManage() {
public:
	SalaryManage(int max = 0) {
		_max = max;
		_n = 0;
		_employ = new Person[_max];
	}

	double &operator[](const char *name) {
		Peron *peron;
		for (person = _employ; person < _employ + n; ++person)
			if(strcmp(person->_name, name) == 0)
				return person->_salary;
		person = _employ + _n++;
		person->_name = new char[strlen(name) + 1];
		strcpy(person->_name, name);
		p->_salary = 0;
		return person->_salary;
	}
	
private:
	Person *_employ;
	int _max;
	int _n;						
};	/* class SalaryManage */


