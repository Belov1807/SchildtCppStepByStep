/*
 * Использование значения value для
 * управления предложением if.
 *
 * Программа, считывает с клавиатуры
 * два целых числа и выводит их частное.
 * Предложение if, управляемое вторым
 * числом, используется для
 * предотвращения деления на ноль.
 */

#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;

    cout << "Введите делимое: ";
    cin >> a;

    cout << "Введите делитель: ";
    cin >> b;

    if (b) cout << "Результат: " << a / b << '\n';
    else cout << "Деление на ноль недопустимо.\n";

    return 0;
}