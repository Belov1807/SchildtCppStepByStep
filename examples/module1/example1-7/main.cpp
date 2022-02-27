/*
 * Демонстрация использования if.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    a = 2;
    b = 3;

    if (a < b) cout << "a меньше b\n";

    // Это предложение ничего не выведет на экран.
    if (a == b) cout << "Это Вы не увидите";

    cout << "\n";

    c = a - b; // c содержит -1
    cout << "c содержит -1.\n";
    if (c >= 0) cout << "c неотрицательно";
    if (c <= 0) cout << "c отрицательно.";

    cout << "\n";

    c = b - a; // c теперь содердит 1.
    cout << "c содержит 1\n";

    if (c >= 0) cout << "c неотрицательно.\n";
    if (c < 0) cout << "c отрицательно.\n";

    return 0;
}
