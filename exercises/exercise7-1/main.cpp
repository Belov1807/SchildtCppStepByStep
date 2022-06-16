/*
 * Программа демонстрирует
 * функцию отсчитывающую
 * и возвращающую число
 * своих вызовов.
 */
#include <iostream>
using namespace std;

static int count = 0;

static int counter();

int main()
{
    cout << "Количество вызовов функции counter = "
         << counter() << '\n';
    cout << "Количество вызовов функции counter = "
         << counter() << '\n';
    cout << "Количество вызовов функции counter = "
         << counter() << '\n';
    return 0;
}

static int counter()
{
    count ++;
    return count ;
}
