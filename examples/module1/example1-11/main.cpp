/*
 * Программа выводит на экран таблицу перевода
 * земных фунтов в их лунные эквиваленты.
*/
#include <iostream>
using namespace std;

int main()
{
    // Земные фунты.
    double earthPound = 0.0;
    // Лунные эквиваленты земных фунтов.
    double moonPound = 0.0;
    // Счетчик.
    int counter = 0;

    for (earthPound = 1.0; earthPound <= 100; earthPound ++)
    {
        moonPound = earthPound * 0.17;

        cout << earthPound << " земных фунта(-ов) эквивалентно(ы) "<< moonPound << " лунным фунтам" << endl;
        counter ++;

        if (counter == 25)
        {
            cout << endl;
            counter = 0;
        }
    }

    return 0;
}
