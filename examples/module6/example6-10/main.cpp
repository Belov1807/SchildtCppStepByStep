/*
 * Программа демонстрирует
 * различные варианты перегрузки
 * функции поиска минимального
 * значения из двух, для разных
 * типов входных параметров.
 */

#include <iostream>
using namespace std;

/*
 * min для int.
 */
int min(int _a, int _b);
/*
 * min для char.
 */
char min(char _a, char _b);
/*
 * min для int*.
 */
int * min(int *_a, int *_b);

int main()
{
    int i = 10, j = 22;

    cout << "min('X', 'a'): " << min('X', 'a') << '\n';
    cout << "min(9, 3): " << min(9, 3) << '\n';
    cout << "*min(&i, &j): " << *min(&i, &j) << '\n';

    return 0;
}

/*
 * min для int.
 * Возвращает меньшее значение.
 */
int min(int _a, int _b)
{
    if (_a < _b) return _a;
    else return _b;
}
/*
 * min для char -
 * игнорирование регистра букв.
 */
char min(char _a, char _b)
{
    if (tolower(_a) < tolower(_b)) return _a;
    else return _b;
}
/*
 * min для уазателей на int.
 * Сравнивает значения и
 * возвращает указатель на
 * меньшее значение.
 */
int * min(int *_a, int *_b)
{
    if (*_a < *_b) return _a;
    else return _b;
}
