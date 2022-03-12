/*
 * Демонстрация динамической инициализации.
 *
 * Программа вычисляет объем цилиндра.
*/
#include <iostream>
using namespace std;

int main()
{
    double radius = 4.0, height = 5.0;

    // Динамически инициализируем переменную volume.
    double volume = 3.1416 * radius * radius * height;

    cout << "Объем равен " <<volume << endl;

    return 0;
}
