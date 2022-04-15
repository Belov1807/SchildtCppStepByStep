/*
 * Передача в функцию строки.
 */

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void strInvertCase(char *_str);

int main()
{
    char str[80];

    strcpy(str, "This Is A Test");

    strInvertCase(str);
    /*Вывод модифицированной строки*/
    cout << str << "\n";

    return 0;
}

/*
 * Преобразование регистра
 * букв внутри строки.
 */
void strInvertCase(char *_str)
{
    while(*_str)
    {
        /*Преобразуем регистр*/
        if (isupper(*_str)) *_str = tolower(*_str);
        else if (islower(*_str)) *_str = toupper(*_str);

        /*Смещение к следующему символу*/
        _str ++;
    }
}
