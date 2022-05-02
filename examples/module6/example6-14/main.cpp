/*
 * Неоднозначность
 * при перегрузке.
 *
 * Пример № 1.
 *
 * Это программа не будет работать.
 */
#include <iostream>
using namespace std;

float myfunc(float _i);
double myfunc(double _i);

int main()
{
   /*
    * Однозначно, вызов
    * myfunc(double).
    */
    cout << myfunc(10.1) << " ";

   /*
    * Неоднозначно.
    */
    cout << myfunc(10); // Ошибка!!!

    return 0;
}

float myfunc(float _i)
{
    return _i;
}

double myfunc(double _i)
{
    return -_i;
}
