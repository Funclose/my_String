#include <iostream>
#include "MyString.h"

int main() {
    setlocale(LC_ALL, "ru");
    //// Создание объекта с использованием конструктора по умолчанию
    //MyString str1;

    //// Создание объекта с использованием конструктора с параметрами
    //MyString str2(100); // Создать строку длиной 100 символов

    // вызов дефолтного конструктора
    MyString str3("Hello, World!");

    // ввод для пользователя
    std::cout << "Enter a string: ";
    MyString str4;
    str4.input();


    std::cout << "str3: ";
    str3.display();

    std::cout << "str4: ";
    str4.display();

    // Вывод количества созданных объектов
    std::cout << "Number of MyString objects created: " << MyString::getObjectCount() << std::endl;

    return 0;
}