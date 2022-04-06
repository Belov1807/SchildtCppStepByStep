/*
 * Программа запрашивает у пользователя
 * две строки и сравнивает эти строки
 * не обращая внимание на регистр.
 */
#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char firstString[70];
    char secondString[70];

    cout << "Введите первую строку:\n";
    cin >> firstString;

    cout << "Введите вторую строку:\n";
    cin >> secondString;

    /*
     * Приведение строк к одному регистру.
     */
    for (int i = 0; firstString[i]; i ++) firstString[i] = toupper(firstString[i]);
    for (int i = 0; secondString[i]; i ++) secondString[i] = toupper(secondString[i]);

    int compareStringResult = strcmp(firstString, secondString);

    if (compareStringResult == 0)
    {
        cout << "Строки равны\n";
    }
    else
    {
        cout << "Строки не равны\n";
    }

    return 0;
}
