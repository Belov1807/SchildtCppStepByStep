/*
 * Программа демонстрирует функцию
 * обменивающую значения переменных,
 * переданных по параметрам-ссылкам
 * и возвращающую наименьшие значение.
 *
 * (Доработанный пример 6-4)
 */
#include <iostream>
using namespace std;

int &min_swap(int &_x, int &_y);

int main()
{
    int i, j, min;

    i = 10;
    j = 20;

    cout << "Исходные значения i и j: ";
    cout << i << ' ' << j << '\n';

    min = min_swap(j, i);

    cout << "Новые значения i и j: ";
    cout << i << ' ' << j << '\n';
    cout << "Минимальное значение: "
         << min << '\n';

    return 0;
}

int &min_swap(int &_x, int &_y)
{
    int temp;

    temp = _x;
    _x = _y;
    _y = temp;

    if (_x > _y) return _y;
    else return _x;
}
