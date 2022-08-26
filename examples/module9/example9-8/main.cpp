/*
 * Демонстрация дружественной функции.
 */
#include <iostream>
using namespace std;

class MyClass
{
    int a, b;

public:
    MyClass(int _i, int _j) { a = _i; b = _j; }
    /*
     * Дружественная функция.
     */
    friend int comDenom(MyClass _x);
};

int comDenom(MyClass _x)
{
    int max = _x.a < _x.b ? _x.a : _x.b;

    for (int i = 2; i <= max; i ++)
        if ((_x.a % i) == 0 && (_x.b % i) == 0) return i;

    return 0;
}

int main()
{
    MyClass n(18, 111);

    if (comDenom(n))
        cout << "Общий знамнатель равен " <<
                comDenom(n) << "\n";
    else
        cout << "Общего знаменателя нет.\n";

    return 0;
}
