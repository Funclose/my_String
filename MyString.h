#pragma once

class MyString
{
	static int objectCount;
	char* str;
public:
	//по умлочанию
	MyString();
	//конструктор парматеров
	MyString(int size);
	MyString(const char* s);
	~MyString();

	void input();
	void display();
	static int getObjectCount();
};

