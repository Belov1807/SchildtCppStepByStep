/*
 * Проект 6-1.
 *
 * Создание перегруженных функций
 * print() и println(), которые
 * выводят на экран данные
 * разных типов.
 */
#include <iostream>
using namespace std;

/*
 * Эти функции осуществляют
 * перевод строки.
 */
void println(bool _b);
void println(int _i);
void println(long _i);
void println(char _ch);
void println(char *_str);
void println(double _d);

/*
 * Эти функции не переводят строку.
 */
void print(bool _b);
void print(int _i);
void print(long _i);
void print(char _ch);
void print(char *_str);
void print(double _d);

int main()
{
    println(true);
    println(10);
    println("Это проверка");
    println('x');
    println(99L);
    println(123.23);

    print("Вот некоторые значения: ");
    print(false);
    print(' ');
    print(88);
    print(' ');
    print(100000L);
    print(' ');
    print(100.01);

    println(" Все!");

    return 0;
}

/*
 * Вот набор функций println().
 */
void println(bool _b)
{
    if (_b) cout << "true\n";
    else cout << "false\n";
}

void println(int _i)
{
    cout << _i << "\n";
}

void println(long _i)
{
    cout << _i << "\n";
}

void println(char _ch)
{
    cout << _ch << "\n";
}

void println(char *_str)
{
    cout << _str << "\n";
}

void println(double _d)
{
    cout << _d << "\n";
}

/*
 * Вот набор функций print().
 */
void print(bool _b)
{
    if (_b) cout << "true";
    else cout << "false";
}

void print(int _i)
{
    cout << _i;
}

void print(long _i)
{
    cout << _i;
}

void print(char _ch)
{
    cout << _ch;
}

void print(char *str)
{
    cout << str;
}

void print(double _d)
{
    cout << _d;
}
