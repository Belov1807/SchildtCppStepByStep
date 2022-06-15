/*
 * Эта программа использует
 * оператор ? для предотвращения
 * деления на ноль.
 */
#include <iostream>
using namespace std;

int div_zero();

int main()
{
    int i, j, result;

    cout << "Введите делимое и делитель: \n";
    cin >> i >> j;

    /*
     * Это предложение предотвращает
     * ошибку деления на ноль.
     */
    result = j ? i / j : div_zero();

    /*
     * Аналог оперератора ?.
     * if (j != 0) result = i / j;
     * else result = div_zero();
     */

    cout << "Результат: " << result << '\n';

    return 0;
}

int div_zero()
{
    cout << "Не могу делить на ноль.\n";
    return 0;
}
