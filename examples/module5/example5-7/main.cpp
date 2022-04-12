/*
 * Программа суммирует объемы
 * трех коробок и выводит на
 * экран среднее значение объема.
 */
#include <iostream>
using namespace std;

/*
 * Вернем объем..
 */
double box(double _lenght, double _width, double _height);

int main()
{
    double sum;
    sum = box(10.1, 11.2, 3.3) + box(5.5, 6.6, 7.7) + box(4.0, 5.0, 8.0);

    cout << "Сумма объемов равна " << sum << "\n";
    cout << "Среднее значение равно " << sum / 3.0 << "\n";

    return 0;
}

/*
 * Эта функция возвращает значение.
 */
double box(double _lenght, double _width, double _height)
{
    return _lenght * _width * _height;
}
