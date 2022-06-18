/*
 * Программа, использующая класс Vehicle.
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
};

int main()
{
    /*
     * Создадим объект класса Vehicle.
     */
    Vehicle minivan;
    int range;

    /*
     * Присвоим значение полям объекта minivan (фургон).
     */
    minivan.passengers = 7;
    minivan.fuelcap = 16;
    minivan.mpg = 21;

    /*
     * Вычислим дальность пробега для полного бензобака.
     */
    range = minivan.fuelcap * minivan.mpg;

    cout << "Фургон может везти " <<  minivan.passengers <<
            " пассажиров на расстоянии " << range << " милль\n";

    return 0;
}
