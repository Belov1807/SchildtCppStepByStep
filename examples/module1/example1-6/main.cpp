/*
 * Эта программа иллюстрирует различия
 * типов int and double.
*/

#include <iostream>

using namespace std;

int main()
{
    int ivar;       // Объявление переменной типа int.
    double dvar;    // Объявление переменной с плавающщей точкой.

    ivar = 100;     // Присвоить ivar значение 100;
    dvar = 100.0;   // Присвоить dvar значение 100.0

    cout << "Исходное значение ivar: " << ivar << "\n";
    cout << "Исходное значение dvar: " << dvar << "\n";

    cout << "\n";   // Вывести пустую строку.

    // Теперь разделим обе переменные на 3.
    ivar = ivar / 3;
    dvar = dvar / 3.0;

    cout << "ivar после деления: " << ivar << "\n";
    cout << "dvar после деления: " << dvar << "\n";

    return 0;
}
