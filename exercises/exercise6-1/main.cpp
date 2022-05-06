/*
 * Программа демонстрирует функцию
 * округляющую свой аргумент
 * до ближайшего целого значения.d
 */
#include <iostream>
#include <cmath>
using namespace std;

void myRound(double &_value);

int main()
{
    double a = 5.4;
    double b = 6.6;

    cout << "Начальные значения: "
         << "a = " << a << ", "
         << "b = " << b << '\n';

    myRound(a);
    myRound(b);

    cout << "Округленные значения: "
         << "a = " << a << ", "
         << "b = " << b << '\n';

    return 0;
}

void myRound(double &_value)
{
    double x = modf(_value, &_value);

    if (x > 0.5) _value += 1;
}
