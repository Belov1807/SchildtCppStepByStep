/*
 * Программа, использующая класс Vehicle.
 *
 * Реализация функции-члена range().
 */
#include <iostream>
using namespace std;

/*
 * Объявим класс Vehicle.
 */
class Vehicle
{
public:
    /*
     * Число пассажиров.
     */
    int passengers;
    /*
     * Емкость бензобака в галлонах.
     */
    int fuelcap;
    /*
     * Потребление топлива в милях на галлон.
     */
    int mpg;

    /*
     * Вычисляет и возвращает дальность пробега.
     */
    int range();
};

/*
 * Реализация функции-члена range.
 */
int Vehicle::range()
{
    return mpg * fuelcap;
}

int main()
{
    /*
     * Создадим объект класса Vehicle.
     */
    Vehicle minivan;
    /*
     * Создадим другой объект класса Vehicle.
     */
    Vehicle sportcar;

    int range1, range2;

    /*
     * Присвоим значение полям объекта minivan (фургон).
     */
    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;

    /*
     * Присвоим значение полям объекта sportcar (спортивный автомобиль).
     */
    sportcar.passengers = 2;
    sportcar.fuelcap = 14;
    sportcar.mpg = 12;

    /*
     * Вычислим дальность пробега для полного бензобака.
     */
    range1 = minivan.range();
    range2 = sportcar.range();

    cout << "Фургон может везти " <<  minivan.passengers <<
            " пассажиров на расстоянии " << range1 << " милль\n";

    cout << "Спортивный автомобиль может везти " <<  sportcar.passengers <<
            " пассажиров на расстоянии " << range2 << " милль\n";

    return 0;
}

