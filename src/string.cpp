#include <stdio.h>
#include <cstring>

class String {
public:
	String() { 
		_sptr = "";
		_len = 0;
		printf("default constructor\n"); 
	}
	String(String &string) {
		this->_sptr = string._sptr;
		this->_len	= string._len;
		printf("copy constructor\n");
	};
	String(const char *s, int n) {
		*_sptr = *s;
		_len = n;
		printf("list construtctor\n");
	}
	~String() { printf("deconstructor\n"); }
	
	/* interface */
	int GetLen() { return _len; }
	char *GetString() { return _sptr; };
	/* TODO: opeartor= */
	String &operator=(const char string[]) {
		int string_len	= sizeof(string) / sizeof(char);
		this->_len			= string_len; 
		this->_sptr			= new char[string_len + 1];

		int i;
		for (i = 0; i < string_len; ++i)
			_sptr[i] = string[i];
		_sptr[i] = '\0';

		return *this;
	}
	int operator==(const String &string) {
		int ans = (this->_len == string._len && this->_sptr == string._sptr);
		return ans;
	}
	int operator!=(const String &string) {
		int ans = !(*this == string);
		return ans;
	}

private:
	int _len;
	char *_sptr;
};	/* class String */

void Test() {
	String string = "hello, world";
	printf("string_len = %d\n", string.GetLen());
	printf("string: %s\n", string.GetString());
}

int main() {
	Test();
}
