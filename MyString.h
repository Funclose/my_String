#pragma once

class MyString
{
	static int objectCount;
	char* str;
public:
	//�� ���������
	MyString();
	//����������� ����������
	MyString(int size);
	MyString(const char* s);
	~MyString();

	void input();
	void display();
	static int getObjectCount();
};

