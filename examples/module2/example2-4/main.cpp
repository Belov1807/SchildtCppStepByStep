/*
 * Демонстрация булевых значений.
*/
#include <iostream>

using namespace std;

int main()
{
    bool b;

    b = false;
    cout << "b равно " << b << "\n";

    b = true;
    cout << "b равно " << b << "\n";

    // Булево значение может управлять значениями if.
    if (b) cout << "Это выполняется.\n";

    b = false;
    if (b) cout << "Это не выполняется\n";

    /*
     * Результатом действия оператора отношения является
     * значение true/false.
    */
    cout << "10 > 9 есть " << (10 > 9) << "\n";

    return 0;
}
