/*
 * Эта программа выводит сумму
 * двух числовых аргументов
 * командной строки.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    double a, b;

    if (argc != 3)
    {
        cout << "Использование: add число\n";
        return 1;
    }

    /*
     * преобразуем первый аргумент
     * командной строки.
     */
    a = atof(argv[1]);
    /*
     * преобразуем второй аргумент
     * командной строки.
     */
    b = atof(argv[2]);

    cout << a + b << "\n";

    return 0;
}
