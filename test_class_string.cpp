#include <iostream>
#include <cstring>
#include "test_class_string.h"

using namespace std;

void testing(){
	char str1[] = "Hello", str2[] = "World!", str3[] = "Hello";
	cout << "---------Testing the program-----------" << "\n";
	String tst1(str1), tst2(str2), tst3(str3);
	if(testing_placement(tst1, tst2))
		cout << "\n" << "----------OK-----------" << "\n\n";
	else cout << "-----------Failed-----------" << "\n\n";
	if(testing_concatenating(tst1, tst3))
		cout << "\n" << "----------OK-----------" << "\n\n";
	else cout << "\n" << "-----------Failed-----------" << "\n\n";
	if(testing_eq_less(tst3, tst1))
		cout << "\n" << "----------OK-----------" << "\n\n";
	else cout << "\n" << "-----------Failed-----------" << "\n\n";
	if(!(testing_eq_more(tst3, tst1)))
		cout << "\n" << "----------OK-----------" << "\n\n";
	else cout << "\n" << "-----------Failed-----------" << "\n\n";
	if(testing_less(tst3, tst1))
		cout << "\n" << "----------OK-----------" << "\n\n";
	else cout << "\n" << "-----------Failed-----------" << "\n\n";
	if(testing_length(tst3) == 5)
		cout << "\n" << "----------OK-----------" << "\n\n";
	else cout << "\n" << "-----------Failed-----------" << "\n\n";
	testing_c_str(tst1);
	cout << "\n";
	if(testing_clear(tst1))
		cout << "\n" << "----------OK-----------" << "\n\n";
	else cout << "\n" << "-----------Failed-----------" << "\n\n";
}

int testing_placement(String str1, String str2){
	cout << "Testing the operator = (placement):" << "\n";
	str1 = str2;
	cout << "str1 = str2: printing str1" << "\n";
	str1.print();
	if(strcmp(str2.c_str(), str1.c_str()) == 0)
		return 1;
	return 0;
}

int testing_concatenating(String str1, String str2){
	cout << "Testing the operator += (concatenating):" << "\n";
	str1 += str2;
	cout << "printing 'World!' += 'Hello': " << "\n";
	str1.print();
	if(strcmp(str1.c_str(), "World!Hello") == 0)
		return 1;
	return 0;
}

int testing_eq_less(String str1, String str2){
	bool flag;
	cout << "Testing the operator <= (less than or equale)" << "\n";
	str1.print();
	cout << " <= ";
	str2.print();
	flag = str1 <= str2;
	if(flag == 1)
		return 1;
	return 0;
}

int testing_eq_more(String str1, String str2){
	bool flag;
	cout << "Testing the operator >= (more than or equale):" << "\n";
	str1.print();
	cout << " >= ";
	str2.print();
	flag = str1 >= str2;
	if(flag == 1)
		return 1;
	return 0;
}

int testing_less(String str1, String str2){
	bool flag;
	cout << "Testing the operator < (less than):" << "\n";
	str1.print();
	cout << " < ";
	str2.print();
	flag = str1 < str2;
	if(flag == 1)
		return 1;
	return 0;
}

int testing_more(String str1, String str2){
	bool flag;
	cout << "Testing the operator > (more than):" << "\n";
	str1.print();
	cout << " > ";
	str2.print();
	flag = str1 > str2;
	if(flag == 1)
		return 1;
	return 0;
}

size_t testing_length(String str){
	cout << "Testing the method length:" << "\n";
	cout << "The length of ";
	str.print();
	cout << "is: " << str.length();
	return str.length();
}

void testing_c_str(String str){
	cout << "Testing the method c_str:" << "\n";
	cout << "The string of ";
	str.print();
	cout << "is: " << str.c_str();
}

int testing_clear(String str){
	cout << "Testing the method clear:" << "\n";
	cout << "clearing ";
	str.print();
	str.clear();
	if(str.c_str() == NULL)
		return 1;
	return 0;
}



