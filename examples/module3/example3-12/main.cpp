/*
 * Эта программа выводит все
 * отображаемые на экране символы,
 * включая расширенный символьный набор,
 * если он существует.
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned char ch;

    ch = 32;

    while (ch)
    {
        cout << ch;
        ch++;
    }

    cout << "ch = " << ch;
    return 0;
}
