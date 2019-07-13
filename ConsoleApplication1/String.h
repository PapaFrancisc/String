#pragma once
#include <iostream>
using namespace std;
using std::cout;

class String;
String operator+(const String& left, const String& right);
ostream& operator << (ostream& os, const String& obj);

class String
{
	int size;   //размер строки
	char *str;  //адресс строки в динам памяти
public:
	int get_size()const;
	const char* get_str() const;
	char* get_str();
	String(int size = 80);
	String(const char str[]);
	String(const String& other);
	String(String&& other);
	~String();
	char& operator[](int i);
	const char& operator[](int i) const;
	String& operator=(const String& other);
	String& operator=(String&& other);
	String& operator+=(const String& other);
	void print();

};