#include <cstdio>
#include "my_string_functions.h"
#include <cstring>
#include <iostream>/*for cout*/
#include <new>/*for new*/
using namespace std;

class String {
	char* m_str;
	public:
	String (char *string);
	void print();
	String& operator= (const String&);
	String& operator+= (const String&);
	bool operator<= (String&) const;
	bool operator>= (String&) const;
	bool operator> (String&) const;
	bool operator< (String&) const;
	const char* c_str() const;
	void clear();
	size_t length() const;
	/*~String (); This DTOR makes troubles with some functions so it is not used here*/
};

inline String::String(char *string = NULL): m_str(NULL) {
	m_str = new (nothrow) char[my_strlen(string) + 1];
	if(m_str != NULL)
		strcpy(m_str, string);
}

inline String& String::operator= (const String & string){
	delete[] m_str;
	m_str = new (nothrow) char[string.length() + 1];
	if(m_str != NULL)
		my_strcpy(m_str, string.c_str());
	return *this;
}

inline bool String::operator<= (String & string) const{
	if(strcmp(this->c_str(), string.c_str()) < 0)
		return true;
	return false;
}

inline bool String::operator>= (String & string) const{
	if(strcmp(this->c_str(), string.c_str()) >= 0)
		return true;
	return false;
}

inline bool String::operator> (String & string) const{
	if(strcmp(this->c_str(), string.c_str()) > 0)
		return true;
	return false;
}

inline bool String::operator< (String & string) const{
	if(strcmp(this->c_str(), string.c_str()) < 0)
		return true;
	return false;
}

inline void String::print() {
	cout << m_str << " ";
}

inline size_t String::length() const{
	return my_strlen(m_str);
}

inline const char* String::c_str() const{
	return m_str;
}

inline void String::clear() {
	delete[] m_str;
	m_str = NULL;
}

/*inline String::~String () {
	delete[] str;
}*/


