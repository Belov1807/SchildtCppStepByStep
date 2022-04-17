/*
 * Собственный вариант функции
 * strlen() стандартной
 * библиотеки.
 * Функция подсчитывает
 * количество символов в строке.
 */
#include <iostream>
#include <cstring>
using namespace std;

int myStrlen(char *_str);

int main()
{
    char *string = "Hello World!!!";

    cout << "Длина строки \"Hello World!!!\" равна " << myStrlen(string) << "\n";

    return 0;
}

int myStrlen(char *_str)
{
    int i;

    for (i = 0; _str[i]; i ++);

    return i;
}
