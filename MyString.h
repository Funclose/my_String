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
	//копирование
	void Mystrcpy(const char* value);
	//подиск подстроки в строке
	bool MyStrStr(const char* str);
	//размер strlen
	int MyStrlen();
	int MyChar(char c);
	//void MyStrCat(MyString& b); // не сделал
	//void MyDelChr(char c); // удаляет указанный символ 
	//int MyStrCmp(MyString& b); //не сделал

	const char* getName() const {
		return str;
	}
	
};

