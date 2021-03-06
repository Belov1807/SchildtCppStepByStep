/*
 * Обращение регистра посредством
 * арифметики указателей.
 */

#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char *p;
    char str[80] = "This Is A Test";

    cout << "Исходная строка: " << str << "\n";

    p = str;

    while (*p)
    {
        if (isupper(*p)) *p = tolower(*p);
        else if (islower(*p)) *p = toupper(*p);
        p ++;
    }

    cout << "Преобразованная строка: " << str << "\n";

    return 0;
}
