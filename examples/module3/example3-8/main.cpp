/*
 * Цикл выполняется, пока случайное число
 * не окажется больше, чем 20000.
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int i;
    int r;

    r = rand();

    for (i = 0; r <= 20000; i ++)
    {
        r = rand();
    }
    cout << "Число равно " << r << ".\nОно было получено на шаге ";
    cout << i << ".\n";
    return 0;
}
