/*
 * Определяем конструктор, деструктор
 * и функцию range(), как встроенные.
 *
 * Доработанный пример 8-6.
 */
#include <iostream>
using namespace std;

/*
 * Объявим класс Vehicle.
 */
class Vehicle
{
    // Эти члены теперь закрыты.

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

public:

    /*
     * Конструктор.
     */
    Vehicle(int _p, int _f, int _m)
    {
        passengers = _p;
        fuelcap = _f;
        mpg = _m;
    }

    /*
     * Вычисляет и возвращает дальность пробега.
     */
    int range() { return mpg * fuelcap; }

    int get_passengers() {return passengers;}
    int get_fuelcap() {return fuelcap;}
    int get_mpg() {return mpg;}
};

int main()
{
    //Передадим значения конструктору Vehicle.

    /*
     * Создадим объект класса Vehicle.
     */
    Vehicle minivan(7, 16, 21);
    /*
     * Создадим другой объект класса Vehicle.
     */
    Vehicle sportcar(2, 14, 12);

    int range1, range2;

    /*
     * Вычислим дальность пробега для полного бензобака.
     */
    range1 = minivan.range();
    range2 = sportcar.range();

    cout << "Фургон может везти " <<  minivan.get_passengers() <<
            " пассажиров на расстоянии " << range1 << " милль\n";

    cout << "Спортивный автомобиль может везти " <<  sportcar.get_passengers() <<
            " пассажиров на расстоянии " << range2 << " милль\n";

    return 0;
}
