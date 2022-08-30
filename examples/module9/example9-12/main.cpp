/*
 * Демонстрация безымянного объеденения.
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*
     * Объявим безымянное объеденение.
     */
    union
    {
        long l;
        double d;
        char s[4];
    };

    /*
     * Теперь обратимся к элементам объединения.
     */
    l = 100000;
    cout << l << " ";
    d = 123.2342;
    cout << d << " ";
    strcpy(s, "hi");
    cout << s << '\n';

    return 0;
}
