#include <iostream>
#include "MyString.h"

int main() {
    setlocale(LC_ALL, "ru");
    //// �������� ������� � �������������� ������������ �� ���������
    //MyString str1;

    //// �������� ������� � �������������� ������������ � �����������
    //MyString str2(100); // ������� ������ ������ 100 ��������

    // ����� ���������� ������������
    MyString str3("Hello, World!");

    // ���� ��� ������������
    std::cout << "Enter a string: ";
    MyString str4;
    str4.input();


    std::cout << "str3: ";
    str3.display();

    std::cout << "str4: ";
    str4.display();

    // ����� ���������� ��������� ��������
    std::cout << "Number of MyString objects created: " << MyString::getObjectCount() << std::endl;

    return 0;
}