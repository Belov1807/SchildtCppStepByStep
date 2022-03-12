/*
 * Демонстрация использования оператора %.
*/
#include <iostream>
using namespace std;

int main()
{
    int x, y;

    x = 10;
    y = 3;

    cout << x << "/" << y << " равно " << x / y << " с остатком " << x % y << endl;

    x = 1;
    y = 2;

    cout << x << " / " << y << " равно " << x / y << endl;
    cout << x << " % " << y << " равно " << x % y << endl;

    return 0;
}
