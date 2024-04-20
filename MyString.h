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
	//�����������
	void Mystrcpy(const char* value);
	//������ ��������� � ������
	bool MyStrStr(const char* str);
	//������ strlen
	int MyStrlen();
	int MyChar(char c);
	//void MyStrCat(MyString& b); // �� ������
	//void MyDelChr(char c); // ������� ��������� ������ 
	//int MyStrCmp(MyString& b); //�� ������

	const char* getName() const {
		return str;
	}
	
};

