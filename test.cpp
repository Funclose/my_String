#include <iostream>
#include "MyString.h"

int main() {
    setlocale(LC_ALL, "ru");
    
    MyString str1("Hello, world!");

    
    std::cout << "�����: ";
    str1.display();

    
    std::cout << "������� �����: " << str1.MyStrlen() << std::endl;

    
    std::cout << "������ 'o' � �����: " << str1.MyChar('o') << std::endl;

    
    std::cout << "ϳ������ 'world' � �����: " << (str1.MyStrStr("world") ? "��������" : "�� ��������") << std::endl;

    // ��������� �����
    MyString str2;
    str2.Mystrcpy(str1.getName()); 

    

    
    std::cout << "��������� ��'������� �����: ";
    str1.display();

    return 0;
}