/*
 * Изменение переданного
 * по значению параметра
 * не изменяет аргумент.
 */
#include <iostream>
using namespace std;

double reciprocal(double _x);

int main()
{
    double t = 10.0;

    cout << "Обратное значение от 10.0 составляет "
         << reciprocal(t) << "\n";
    cout << "Значение t все еще равно: " << t << "\n";

    return 0;
}

/*
 * Возврат обратного значения.
 */
double reciprocal(double _x)
{
    /*
     * Создаем обратное значение.
     */
    _x = 1 / _x;

    return _x;
}
