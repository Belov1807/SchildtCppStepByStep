/*
 * Демонстрация цепочки if-else-if.
 */

#include <iostream>

using namespace std;

int main()
{
    int x;

    for (x = 0; x < 6; x ++)
    {
        if (x == 1) cout << "x равняется одному\n";
        else if (x == 2) cout << "x равняется двум\n";
        else if (x == 3) cout << "x равняется трем\n";
        else if (x == 4) cout << "x равняется четырем\n";
        else cout << "x не находится между 1 и 4\n";
    }
    return 0;
}
