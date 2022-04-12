/*
 * Передача в функцию указателя.
 */

#include <iostream>
using namespace std;

/*
 * Объявляет параметр-указатель.
 */
void f(int *_j);

int main()
{
    int i;

    /*
     * Передача указателя.
     */
    f(&i);

    /*
     * i теперь равняется 100.
     */
    cout << i << "\n";

    return 0;
}

/*
 * f() Получает указатель на int.
 */
void f(int *_j)
{
    *_j = 100;
}
