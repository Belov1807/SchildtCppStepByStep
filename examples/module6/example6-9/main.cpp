/*
 * Программа демонстрирует пример
 * различных вариантов перегрузки
 * одной и той же функции.
 */
#include <iostream>
using namespace std;

/*
 * Функция для int.
 */
int neg(int _n);
/*
 * Функция для double.
 */
double neg(double _n);
/*
 * Функция для long.
 */
long neg(long _n);

int main()
{
    cout << "neg(-10): " << neg(-10) << '\n';
    cout << "neg(9L): " << neg(9L) << '\n';
    cout << "neg(11.23): " << neg(11.23) << '\n';

    return 0;
}

/*
 * Функция для int.
 */
int neg(int _n)
{
    return -_n;
}

/*
 * Функция для double.
 */
double neg(double _n)
{
    return -_n;
}

/*
 * Функция для long.
 */
long neg(long _n)
{
    return -_n;
}
