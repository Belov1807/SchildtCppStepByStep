/*
 * Программа преобразует юпитерианские годы в земные.
*/
#include <iostream>
using namespace std;

int main()
{
    // Юпитерианские годы.
    double jupiterYears = 0;
    // Земные годы.
    double earthYears = 0;

    cout << "Введите число юпитерианских лет:" << endl;
    cin >> jupiterYears;

    earthYears = jupiterYears * 12;

    cout << jupiterYears << " юпитерианских годов эквивалентно " << earthYears << " земных годов." << endl;

    return 0;
}
