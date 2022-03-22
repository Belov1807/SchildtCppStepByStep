/*
 * Программа демонстрирует объявление
 * переменной управления циклом
 * внутри предложения for.
 */

#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int fact = 1;

    // Вычислим факториал числа 5.
    for (int i = 1; i <= 5; i ++)
    {
        sum += i;
        fact *= i;
    }

    cout << "Сумма равна " << sum << "\n";
    cout << "Факториал равен " << fact << "\n";

    return 0;
}
