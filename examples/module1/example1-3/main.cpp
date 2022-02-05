/*
 * Использование оператора.
 */

#include <iostream>
using namespace std;

int main()
{
    int length;             // Объявление первой переменной.
    int width;              // Объявление второй переменной.
    int area;               // Объявление третьей переменной.

    length = 7;             // Присвоение згачения.
    width = 5;              //Присвоение значения.

    area = length * width;  // Вычисление площади.

    cout << "Площадь равна ";
    cout << area;           // Здесь выводистся значение площади.
    cout << "\n";

    return 0;
}
