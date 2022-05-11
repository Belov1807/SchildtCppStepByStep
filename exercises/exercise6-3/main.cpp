/*
 * Создание перегруженных функций
 * print() и println(), которые
 * выводят на экран данные
 * разных типов.
 *
 * Перед выводом есть возможность
 * указать величину отступа.
 *
 * (Доработанный проект 5-1)
 */
#include <iostream>
using namespace std;

/*
 * Эти функции осуществляют
 * перевод строки.
 */
void println(bool _b, int _indent = 0);
void println(int _i, int _indent = 0);
void println(long _i, int _indent = 0);
void println(char _ch, int _indent = 0);
void println(char *_str, int _indent = 0);
void println(double _d, int _indent = 0);

/*
 * Эти функции не переводят строку.
 */
void print(bool _b, int _indent = 0);
void print(int _i, int _indent = 0);
void print(long _i, int _indent = 0);
void print(char _ch, int _indent = 0);
void print(char *_str, int _indent = 0);
void print(double _d, int _indent = 0);

/*
 * Печатает отступы.
 */
void indent(int _numberOfCharacters);

int main()
{
    println("Отступ 10: ");
    println(true, 10);
    println("Отступ 5: ");
    println(10, 5);
    println("Это проверка");
    println("Отступ 4: ");
    println('x', 4);
    println("Отступ 7: ");
    println(99L, 7);
    println(123.23);

    print("Вот некоторые значения: ");
    print("Отступ 2: ");
    print(false, 2);
    print(' ');
    print(88);
    print(' ');
    print(100000L);
    print(' ');
    print("Отступ 5: ");
    print(100.01, 5);
    println(" Все!");

    return 0;
}

/*
 * Вот набор функций println().
 */
void println(bool _b, int _indent)
{
    indent(_indent);

    if (_b) cout << "true\n";
    else cout << "false\n";
}

void println(int _i, int _indent)
{
    indent(_indent);

    cout << _i << "\n";
}

void println(long _i, int _indent)
{
    indent(_indent);

    cout << _i << "\n";
}

void println(char _ch, int _indent)
{
    indent(_indent);

    cout << _ch << "\n";
}

void println(char *_str, int _indent)
{
    indent(_indent);

    cout << _str << "\n";
}

void println(double _d, int _indent)
{
    indent(_indent);

    cout << _d << "\n";
}

/*
 * Вот набор функций print().
 */
void print(bool _b, int _indent)
{
    indent(_indent);

    if (_b) cout << "true";
    else cout << "false";
}

void print(int _i, int _indent)
{
    indent(_indent);

    cout << _i;
}

void print(long _i, int _indent)
{
    indent(_indent);

    cout << _i;
}

void print(char _ch, int _indent)
{
    indent(_indent);

    cout << _ch;
}

void print(char *_str, int _indent)
{
    indent(_indent);

    cout << _str;
}

void print(double _d, int _indent)
{
    indent(_indent);

    cout << _d;
}

void indent(int _numberOfCharacters)
{
    for (int i = 0; i < _numberOfCharacters; i ++) cout << ' ';
}
