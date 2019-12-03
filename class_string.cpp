#include "class_string.h"
using namespace std;

String& String::operator+= (const String& string){
	char *tmp;
	tmp = new (nothrow) char[my_strlen(m_str) + 1];
	if(tmp != NULL){
		my_strcpy(tmp, m_str);
		delete[] m_str;
		m_str = new (nothrow) char[my_strlen(tmp) + string.length() + 1];
		if(m_str != NULL){
			my_strcpy(m_str, tmp);
			my_strcat(m_str, string.m_str);
		}
	}
	delete[] tmp;
	return *this;
}




