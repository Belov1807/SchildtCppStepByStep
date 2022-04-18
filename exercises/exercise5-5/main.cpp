/*
 * В программе продемонстрирована
 * реализация рекурсивной функции,
 * которая выводит числа от 1 до 10.
 */
#include <iostream>
using namespace std;

void output(int _value);

int main()
{
    output(1);
    cout << "\n";

    return 0;
}

void output(int _value)
{
    cout << _value << " ";

    if (_value > 0 && _value < 10) output(_value + 1);
}
