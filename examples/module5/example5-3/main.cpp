/*
 * Использование предложения return.
 */

#include <iostream>
using namespace std;

void f();

int main()
{
    cout << "Перед вызовом\n" << endl;
    f();
    cout << "После вызова\n" << endl;
    return 0;
}

/*
 * Функци void, использующая return.
 */
void f()
{
    cout << "Внутри f()\n";
    /*
     * Возврат в вызывающий код.
     */
    return;

    cout << "Это не будет выводится.\n";
}
