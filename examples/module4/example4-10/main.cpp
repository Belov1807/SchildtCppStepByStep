/*
 * Программа демонстрирует
 * пример работы с указателями.
*/

#include <iostream>
using namespace std;

int main()
{
    int total;
    int *ptr;
    int val;

    total = 3200;

    // Получение адреса.
    ptr = &total;

    // Получение значения по адресу.
    val = *ptr;

    cout << "total = " << val << "\n";

    return 0;
}
