/*
 * Эта программа использует прототип
 * функции для активации строгой
 * проверки типов.
 *
 * Данный пример не скомпилируется.
 */

#include <iostream>
using namespace std;

/*
 * Прототип.
 */
void sqr_it(int *_i);

int main()
{
    int x;

    x = 10;
    /*
     * Ошибка!
     * Несоответствие типов.
     */
    sqr_it(x);

    cout << "Hello World!" << endl;
    return 0;
}

void sqr_it(int *_i)
{
    *_i = *_i * *_i;
}
