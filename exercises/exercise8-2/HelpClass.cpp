/*
 * Добавление в справочную систему
 * идентификатора полльзователя.
 *
 *  Доработанный проект 8-1.
 */
#include <iostream>
using namespace std;

/*
 * Класс, инкапсулирующий справочную систему.
 */
class Help
{
public:
    Help(int _userId);
    ~Help();
    /*
     * Вывод справочной информации.
     */
    void helpon(char _what);
    /*
     * Вывод на экран меню
     * справочной системы.
     */
    void showmenu();
    /*
     * Возвращает true,
     * если выбор допустим.
     */
    bool isvalid(char _ch);

    int getUserId() const;

private:
    int userId;
};

int main()
{
    char choice;
    /*
     * Создание экземпляра класса Help.
     */
    Help hlpob(88);
    cout << "Начало пользования справочником для пользователя"
         << " #" << hlpob.getUserId() << '\n';

    for (;;)
    {
        do
        {
            hlpob.showmenu();
            cin >> choice;
        }
        while (!hlpob.isvalid(choice));

        if (choice == 'q') break;
        cout << '\n';

        hlpob.helpon(choice);
    }


    return 0;
}

Help::Help(int _userId)
{
    userId = _userId;
}

Help::~Help()
{
    cout << "Завершение пользования справочником для пользователя"
         << " #" << getUserId() << '\n';
}

void Help::helpon(char _what)
{
    switch (_what)
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
    cout << '\n';
}

void Help::showmenu()
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
}

bool Help::isvalid(char _ch)
{
    if ((_ch < '1' ||
         _ch > '8') &&
         _ch != 'q')
        return false;
    else
        return true;
}

int Help::getUserId() const
{
    return userId;
}
