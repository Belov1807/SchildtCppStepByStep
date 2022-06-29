/*
 * Пример простого конструктора
 * и деструктора.
 */
#include <iostream>
using namespace std;

class MyClass
{
public:
    int x;

    // Объявляем конструктор и деструктор.

    /*
     * Конструктор.
     */
    MyClass();
    /*
     * Деструктор.
     */
    ~MyClass();
};

int main()
{
    MyClass ob1;
    MyClass ob2;

    cout << ob1.x << " " << ob2.x << "\n";

    return 0;
}

/*
 * Реализация конструктора.
 */
MyClass::MyClass()
{
    x = 10;
}

/*
 * Реализация деструктора.
 */
MyClass::~MyClass()
{
    cout << "Уничтожаем...\n";
}
