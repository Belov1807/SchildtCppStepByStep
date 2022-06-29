/*
 * Альтернативный способ инициализации.
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
    MyClass(int _i);
    /*
     * Деструктор.
     */
    ~MyClass();
};

int main()
{
    /*
     * Вызов MyClass(5);
     */
    MyClass ob = 5;

    cout << ob.x << "\n";

    return 0;
}

/*
 * Реализация параметрического конструктора.
 */
MyClass::MyClass(int _i)
{
    x = _i;
}

/*
 * Реализация деструктора..
 */
MyClass::~MyClass()
{
    cout << "Уничтожаем объект, у которого значение x равно "
         << x << '\n';
}
