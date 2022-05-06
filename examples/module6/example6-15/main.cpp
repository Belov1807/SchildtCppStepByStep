/*
 * Неоднозначность
 * при перегрузке.
 *
 * Пример № 2.
 *
 * Это программа не будет работать.
 */
#include <iostream>
using namespace std;

char myfunc(unsigned char _ch);
char myfunc(char _ch);

int main()
{
    /*
     * Здесь вызывается myfunc(char).
     */
    cout << myfunc('c');
    /*
     * Ошибка! Неоднозначность!
     */
    cout << myfunc(88) << " ";

    return 0;
}

char myfunc(unsigned char _ch)
{
    return _ch-1;
}

char myfunc(char _ch)
{
    return _ch+1;
}
