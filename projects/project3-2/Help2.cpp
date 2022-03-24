/*
 * Проект 3-2
 * Усовершенствованная справочная система,
 * которая использует цикл do-while для выбора пункта меню.
 */

#include <iostream>

using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "1 Справка по if\n";
        cout << "2 Справка по switch\n";
        cout << "3 Справка по for\n";
        cout << "4 Справка по while\n";
        cout << "5 Справка по do-while\n";
        cout << "Выберите один из пунктов:\n";
        cin >> choice;
    }
    while (choice < 1 ||
           choice > 5);

    switch (choice)
    {
    case 1:
        cout << "Предложение if:\n\n";
        cout << "if (условие) предложение;\n";
        cout << "else предложение;\n";
        break;
    case 2:
        cout << "Предложение switch:\n\n";
        cout << "switch (выражение) {\n";
        cout << "   case константа:\n";
        cout << "       последовательность предложений\n";
        cout << "       break;\n";
        cout << " // ...\n";
        cout << "}\n";
        break;
    case 3:
        cout << "Цикл while:\n\n";
        cout << "while (условие) предложение)\n";
        cout << "   предложение:\n";
        break;
    case 4:
        cout << "Цикл for:\n\n";
        cout << "for (инициализация; условие; приращение)";
        cout << "   предложение;\n";
        break;
    case 5:
        cout << "Цикл do-while:\n\n";
        cout << "do {\n";
        cout << "   предложение:\n";
        cout << "} while (условие);\n";
        break;
    }
    return 0;
}
