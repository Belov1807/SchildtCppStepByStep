/*
 * Неоднозначность
 * при перегрузке.
 *
 * Пример № 3.
 *
 * Это программа не будет работать.
 */
#include <iostream>
using namespace std;

int myfunc(int _i);
int myfunc(int _i, int _j = 1);

int main()
{
    /*
     * Однозначно.
     */
    cout << myfunc(4, 5) << " ";
    /*
     * Ошибка! Неоднозначность!
     */
    cout << myfunc(10);

    return 0;
}

int myfunc(int _i)
{
    return _i;
}

int myfunc(int _i, int _j)
{
    return _i*_j;
}
