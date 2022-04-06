/*
 * Использование двумерного массива указателей
 * для создания словаря.
 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *dictionary[][2] = {
        "карандаш", "Инструмент для рисования.",
        "клавиатура", "Устройство ввода." ,
        "ружье", "Плечевое огнестрельное оружие.",
        "Самолет", "Воздушное судно с неподвижными крыльями",
        "сеть", "Группа соединенных между собой компьютеров",
        "",""
    };

    char word[70];
    int i;

    cout << "Введите слово: ";
    cin >> word;

    for (i = 0; *dictionary[i][0]; i ++)
    {
        if (!strcmp(dictionary[i][0], word))
        {
            cout << dictionary[i][1] << "\n";
            break;
        }
    }

    if (!*dictionary[i][0]) cout << word << " не найдено.\n";

    return 0;
}
