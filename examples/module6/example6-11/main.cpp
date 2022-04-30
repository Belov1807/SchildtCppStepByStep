/*
 * Автоматическое преобразование
 * типа может влиять на выбор
 * перегруженной функции.
 */
#include <iostream>
using namespace std;

void f(int _x);

void f(short _x);

void f(double _x);

int main()
{
    int i = 10;
    double d = 10.1;
    short s = 99;
    float r = 11.5F;

  /*
   * Вызывается f(int).
   */
    f(i);
    /*!
   * Вызывается f(double).
   */
    f(d);

  /*
   * Вызывается f(int) - преобразование типа.
   */
    f(s);
  /*
   * Вызывается f(double) - преобразование типа.
   */
    f(r);

    return 0;
}

void f(int _x)
{
    cout << "Внутри f(int): " << _x << "\n";
}

void f(short _x)
{
    cout << "Внутри f(short): " << _x << "\n";
}

void f(double _x)
{
    cout << "Внутри f(double): " << _x << "\n";
}
