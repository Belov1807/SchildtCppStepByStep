/*
 * Пример параметрического конструктора.
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
    MyClass t1(5);
    MyClass t2(19);

    cout << t1.x << " " << t2.x << "\n";

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
