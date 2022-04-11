/*
 * Простая программа, демонстрирующая
 * использование функции box().
 */
#include <iostream>
using namespace std;

/*
 * Прототип box().
 */
void box(int _lenght, int _width, int _height);

int main()
{
    box(7, 20, 4);
    box(50, 3, 2);
    box(8, 6, 9);

    return 0;
}

/*
 * Вычисление объема коробки.
 */
void box(int _lenght, int _width, int _height)
{
    cout << "объем коробки равен " << _lenght * _width * _height << "\n";
}
