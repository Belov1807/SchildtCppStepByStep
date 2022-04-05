/*
 * Индексация указателя,
 * как если бы он был массивом.
 */
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char *p;
    int i;
    char str[80] = "This Is A Test";

    cout << "Исходная строка: " << str << "\n";

    p = str;

    for (i = 0; p[i]; i ++)
    {
        if (isupper(p[i])) p[i] = tolower(p[i]);
        else if (islower(p[i])) p[i] = toupper(p[i]);
    }

    cout << "Преобразованная строка: " << str << "\n";

    return 0;
}
