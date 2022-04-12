/*
 * Программа, демонстрирующая
 * возврат значения типа double.
 */
#include <iostream>
using namespace std;

/*
 * Вернем объем..
 */
double box(double _lenght, double _width, double _height);

int main()
{
    double answer;
    answer = box(10.1, 11.2, 3.3);

    cout << "Объем равен " << answer << "\n";
    return 0;
}

/*
 * Эта функция возвращает значение.
 */
double box(double _lenght, double _width, double _height)
{
    return _lenght * _width * _height;
}
