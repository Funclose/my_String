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
//����������
MyString::~MyString()
{
	delete[] str;
	--objectCount;
}



//���� �������������
void MyString::input()
{
	std::cin.getline(str, 80);
}

//����� � �������
void MyString::display()
{
	std::cout << str << std::endl;
}

//����� ������� �������� �������������
int MyString::getObjectCount()
{
	return objectCount;
}




//����������� *��� strcpy
void MyString::Mystrcpy(const char* value)
{
	int length = strlen(value);
	delete[] str;
	str = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		str[i] = value[i];
	}
	str[length] = '\0';
}

//����� ��������� � ������
bool MyString::MyStrStr(const char* str)
{
	int len = strlen(str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		int j = 0;
		while (str[j] != '\0' && str[i + j] == str[j])
			++j;
		if (str[j] == '\0')
		{
			return true;
		}
	}
	return false;
}

//my strlen
int MyString::MyStrlen()   //���� ������ �� ���������, ���������

{
	int length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return length;
}




int MyString::MyChar(char c)
{
	int index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
		{
			return index; //������ ��������� �������
		}
	}
	return -1;
}





