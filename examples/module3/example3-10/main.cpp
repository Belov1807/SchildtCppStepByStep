/*
 * Программа демонстрирует цикл
 * с отсутствующим телом.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i;
    int sum = 0;

    // Суммируем числа от 1 до 10.
    for (i = 1; i <= 10; sum += i++);

    cout << "Сумма равна " << sum << "\n";
    return 0;
}
