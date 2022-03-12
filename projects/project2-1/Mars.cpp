/*
 * Проект 2-1
 * Разговор с Марсом.
 *
 * Программа выводит время задержки
 * радиосигнала при
 * разговоре с Марсом.
*/
#include <iostream>
using namespace std;

int main()
{
    // Расстояние (Мили).
    const double distance = 34000000.0;
    // Скорость света (Мили в секунду).
    const double lightspeed = 186000.0;
    // Задержка.
    double delay = distance / lightspeed;
    // Задержка в минутах.
    double delay_in_min = delay / 60.0;

    cout << "Временная задержка при разговоре с Марсом: " << delay << " секунд" << endl;
    cout << "Это составляет " << delay_in_min << " минут" << endl;

    return 0;
}
