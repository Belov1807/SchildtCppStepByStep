/*
 * Проект 5-1.
 *
 * Рекурсивный вариант алгоритма
 * Quicksort для упорядочения символов.
 */
#include <iostream>
#include <cstring>
using namespace std;

void quicksort(char *_items, int _len);

void qs(char *_items, int _left, int _right);

int main()
{
    char str[] = "ezsdadzsadesz";
    int i;

    cout << "Исходный массив: " << str << "\n";
    quicksort(str, strlen(str));

    cout << "Упорядоченный массив: " << str << "\n";

    return 0;
}

/*
 * Вызовем функцию, выполняющую
 * фактическое упорядочение.
 */
void quicksort(char *_items, int _len)
{
    qs(_items, 0, _len - 1);
}

/*
 * Рекурсивный вариант алгоритма
 * Quicksort для упорядочения символов.
 */
void qs(char *_items, int _left, int _right)
{
    int i, j;
    char x, y;

    i = _left;
    j = _right;

    x = _items[(_left + _right) / 2];

    do
    {
        while ((_items[i] < x) && (i < _right)) i ++;
        while ((x < _items[j]) && (j > _left)) j --;

        if (i <= j)
        {
            y = _items[i];
            _items[i] = _items[j];
            _items[j] = y;
            i++; j --;
        }
    }
    while (i <= j);

    if (_left < j) qs(_items, _left, j);
    if (i < _right) qs(_items, i, _right);
}
