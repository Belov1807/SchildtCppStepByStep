/*
 * Использование cin для
 * ввода строки с клавиатуры.
 */

#include <iostream>
using namespace std;

int main()
{
    char str[80];

    cout << "Введите строку: ";

    // Ввод строки с клавиатуры.
    cin >> str;

    cout << "Вот ваша строка: \n";
    cout << str;
    cout << "\n";

    return 0;
}
