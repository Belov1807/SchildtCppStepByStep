/*
 * Проект 3-3
 * Законченная справочная система.
 *
 * Программа выводит информацию о синтаксисе управляющих предложений
 * (if, switch, for, while, do-while, break, continue, goto)
 * Про­грамма теперь позволяет пользователю запросить справку по
 * несколь­ким предложениям языка. С этой целью в программу добавлен
 * внешний цикл, который выполняется до тех пор, пока пользователь
 * в ответ на предложение программы выбрать пункт меню не введет q.
 */

#include <iostream>

using namespace std;

int main()
{
    char choice;

    for (;;)
    {
        do
        {
            cout << "1 Справка по if\n";
            cout << "2 Справка по switch\n";
            cout << "3 Справка по for\n";
            cout << "4 Справка по while\n";
            cout << "5 Справка по do-while\n";
            cout << "6 Справка по break\n";
            cout << "7 Справка по continue\n";
            cout << "8 Справка по goto\n";
            cout << "q Выход\n";

            cout << "Выберите один из пунктов:\n";
            cin >> choice;
        }
        while ((choice < '1' ||
                choice > '8') &&
                choice != 'q');

        if (choice == 'q') break;

        switch (choice)
        {
        case '1':
            cout << "Предложение if:\n\n";
            cout << "if (условие) предложение;\n";
            cout << "else предложение;\n\n";
            break;
        case '2':
            cout << "Предложение switch:\n\n";
            cout << "switch (выражение) {\n";
            cout << "   case константа:\n";
            cout << "       последовательность предложений\n";
            cout << "       break;\n";
            cout << " // ...\n";
            cout << "}\n\n";
            break;
        case '3':
            cout << "Цикл while:\n\n";
            cout << "while (условие) предложение)\n";
            cout << "   предложение;\n\n";
            break;
        case '4':
            cout << "Цикл for:\n\n";
            cout << "for (инициализация; условие; приращение)";
            cout << "   предложение;\n\n";
            break;
        case '5':
            cout << "Цикл do-while:\n\n";
            cout << "do {\n";
            cout << "   предложение:\n";
            cout << "} while (условие);\n\n";
            break;
        case '6':
            cout << "Предложение break:\n\n";
            cout << "break;\n";
            break;
        case '7':
            cout << "Предложение continue:\n\n";
            cout << "continue;\n";
            break;
        case '8':
            cout << "Предложение goto:\n\n";
            cout << "goto метка;\n";
            break;
        }
    }
    return 0;
}
