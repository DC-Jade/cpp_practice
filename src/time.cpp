#include <stdio.h>

class Time {
public:
	Time() { printf("default constructor\n"); }
	Time(int h, int m, int s) : _h(h), _m(m), _s(s) {
		printf("list constructor\n");
	}
	Time(const Time &time) {
		this->_h = time._h; this->_m = time._m; this->_s = time._s;
		printf("copy constructor\n");
	}
	~Time() { printf("deconstructor\n"); }

	/* interface */
	void ShowTime() { printf("h = %d m = %d s = %d\n", _h, _m, _s); }
	Time &operator++(int) { 
		(this->_h)++; (this->_m)++; (this->_s)++;
		printf("postfix increment\n");
		return *this;
	}
	Time &operator++() {
		++this->_h; ++this->_m; ++this->_s;
		printf("prefix increment\n");
		return *this;
	}
	
private:
	int _h, _m, _s;
};

void Test() {
	Time time_one(1, 1, 1);
	time_one.ShowTime();
	time_one++;
	time_one.ShowTime();
	++time_one;
	time_one.ShowTime();
}

int main(int argc, char *argv[]) {
	Test();
}
