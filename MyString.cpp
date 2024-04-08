#include <iostream>
#include "MyString.h"
#include <cstring>

int MyString::objectCount = 0;

MyString::MyString() : str(new char[81])
{
	++objectCount;
}

MyString::MyString(int size) : str(new char[size + 1])
{
	++objectCount;
}

MyString::MyString(const char* s) : str(new char[strlen(s) + 1])
{
	strcpy_s(str, strlen(s) + 1, s);
	++objectCount;
}

MyString::~MyString()
{
	delete[] str;
	--objectCount;
}

void MyString::input()
{
	std::cin.getline(str, 80);
}

void MyString::display()
{
	std::cout << str << std::endl;
}

int MyString::getObjectCount()
{
	return objectCount;
}

