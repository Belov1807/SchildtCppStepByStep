/*
 * Локальная переменная инициализируется
 * каждый раз при входе в ее блок.
 */

#include <iostream>
using namespace std;

void f();

int main()
{
    for (int i = 0; i < 3; i ++) f();

    return 0;
}

void f()
{
    int num = 99;

    cout << num << "\n";

    /*Результат этого действия не сохраняется*/
    num ++;
}
