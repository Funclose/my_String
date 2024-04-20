#include <iostream>
#include "MyString.h"

int main() {
    setlocale(LC_ALL, "ru");
    
    MyString str1("Hello, world!");

    
    std::cout << "Рядок: ";
    str1.display();

    
    std::cout << "Довжина рядка: " << str1.MyStrlen() << std::endl;

    
    std::cout << "Символ 'o' в рядку: " << str1.MyChar('o') << std::endl;

    
    std::cout << "Підрядок 'world' у рядку: " << (str1.MyStrStr("world") ? "знайдено" : "не знайдено") << std::endl;

    // Копіювання рядка
    MyString str2;
    str2.Mystrcpy(str1.getName()); 

    

    
    std::cout << "Результат об'єднання рядків: ";
    str1.display();

    return 0;
}