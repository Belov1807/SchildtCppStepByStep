/*
 * Переменные могут быть
 * локальными по отношению к блоку.
 */

#include <iostream>
using namespace std;

int main()
{
    int x = 19;
    if (x == 19)
    {
        int y = 20;

        cout << "x + y равно " << x + y << "\n";
    }

    //y = 100;//Будет ошибка! Здесь y неизвестна.

    return 0;
}
