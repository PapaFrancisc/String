#include<iostream>
#include"String.h"

using namespace std;
using std::cout;

//#define CONSTRUCTORS_CHECK
//#define OPERATORS_CHECK


void main()
{
	setlocale(LC_ALL, "rus");
#ifdef CONSTRUCTORS_CHECK

	cout << typeid("Hello").name() << endl;
	String str1 = "Hello";
	//str1.print();
	cout << str1 << endl;
	String str2 = str1;
	cout << str2 << endl;
	String str3;
	str2 = str2;
	cout << str2 << endl;
#endif // CONSTRUCTORS_CHECK
#ifdef OPERATORS_CHECK

	String str1 = "Hello";
	String str2 = "World";
	//String str3 = str1 + " " + str2;
	//cout << str3 << endl;
	str1 += str2;
	cout << str1 << endl;
#endif // OPERATORS_CHECK

	String str1 = "Hello";
	String str2 = "World";
	String str3;
	str3 = str1 + " " + str2;
	cout << "____________________________________________________________________" << endl;
	cout << str3 << endl;
	cout << "____________________________________________________________________" << endl;

}