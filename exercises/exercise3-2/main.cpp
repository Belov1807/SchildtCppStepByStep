/* Программа вычисляет и выводит на экран
 * геометрическую прогрессию, использую цикл for.
 */

#include <iostream>
#include <limits>

using namespace std;

int main()
{
    unsigned int maxLimit = numeric_limits<unsigned int>::max();

    for (unsigned int i = 1; i <= maxLimit / 2; i *= 2)
    {
        cout << i <<", ";
    }
    cout << "\b\b \n";

    return 0;
}
