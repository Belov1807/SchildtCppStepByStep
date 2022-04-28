/*
 * Программа демонстрирует пример
 * трижды перегруженной функции.
 */

#include <iostream>
using namespace std;

/*
 * Параметр типа int.
 */
void f(int _i);
/*
 * Два параметра типа int.
 */
void f(int _i, int _j);
/*
 * Один параметр типа double.
 */
void f(double _k);

int main()
{
    /*
     * Вызов f(int).
     */
    f(10);
    /*
     * Вызов f(int, int).
     */
    f(10, 20);
    /*
     * Вызов f(double).
     */
    f(12.23);

    return 0;
}

void f(int _i)
{
    cout << "В f(int) i равно " << _i << '\n';
}

void f(int _i, int _j)
{
    cout << "В f(int, int) i равно " << _i << '\n';
    cout << "В f(int, int) j равно " << _j << '\n';
}

void f(double _k)
{
    cout << "В f(double) k равно " << _k << '\n';
}
