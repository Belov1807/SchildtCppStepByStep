/*
 * Использование gets() для ввода
 * строки с клавиатуры.
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char str[80];

    cout << "Вводите строку: ";

    // Ввод строки с помощью gets().
    gets(str);
    cout << "Вот ваша строка:\n";
    cout << str;
    cout << "\n";

    return 0;
}
