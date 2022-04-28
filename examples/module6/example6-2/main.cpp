/*
 * Программа демонстрирует обмен
 * значений переменных, переданных
 * в функцию по указателям.
 */
#include <iostream>
using namespace std;

/*
 * Объявляем, что функция использует указатели.
 */
void swap(int *_x, int *_y);

int main()
{
    int i, j;

    i = 10;
    j = 20;

    cout << "Исходные значения i и j: ";
    cout << i << ' ' << j << '\n';

    /*
     * Вызов функции с адресами i и j/
     */
    swap(&j, &i);

    cout << "Новые значения i и j: ";
    cout << i << ' ' << j << '\n';

    return 0;
}

void swap(int *_x, int *_y)
{
    int temp;

    /*
     * Сохраним значение с адресом x.
     */
    temp = *_x;
    /*
     * Поместим значение с адресом y
     * в переменную с адресом x.
     */
    *_x = *_y;
    /*
     * Поместим значение с адресом x
     * в переменную с адресом y.
     */
    *_y = temp;
}