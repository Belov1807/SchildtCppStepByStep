/*
 * Демонстрация аргументов с
 * инициализацией по умолчанию.
 */
#include <iostream>
using namespace std;

void myfunc(int _x = 0, int _y = 100);

int main()
{
    myfunc(1, 2);

    myfunc(10);

    myfunc();

    return 0;
}

void myfunc(int _x, int _y)
{
    cout << "x: " << _x << ", y: " << _y << "\n";
}
