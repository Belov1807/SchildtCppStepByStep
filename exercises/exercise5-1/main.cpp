/*
 * Программа вычисляет гипотенузу
 * прямоугольного треугольника
 * по двум  его катетам.
 */
#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double _legOne, double _legTwo);

int main()
{
    double legOne;
    double legTwo;

    cout << "Программа вычисляет гипотенузу прямоугольного"
         << " треугольника по двум его катетам.\n\n";

    cout << "Введите первый катет: ";
    cin >> legOne;

    cout << "Введите второй катет: ";
    cin >> legTwo;

    cout << "гипотенуза прямоуголльного треугольника со сторонами "
         << legOne << " и " << legTwo << " равна "
         << hypotenuse(legOne, legTwo) << endl;

    /*Функция нахождения гипотенузы с++11
    cout << "\nГипотинуза = " << hypot(legOne, legTwo);
    */

    return 0;
}

double hypotenuse(double _legOne, double _legTwo)
{
    return sqrt(pow(_legOne, 2) + pow(_legTwo, 2));
}
