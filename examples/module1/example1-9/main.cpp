/*
 * Программа демонстрирующая программный блок.
 */

#include <iostream>
using namespace std;

int main()
{
    double result, n, d;

    cout << "Введите значение: ";
    cin >> n;

    cout << "Введите делитель: ";
    cin >> d;

    // Целевым объектом педложения if является блок.
    if (d != 0)
    {
        cout << "d не равно нулю, поэтому делить можно" << "\n";
        result = n /d;
        cout << n << "/" << d << " равно " << result << "\n";
    }

    return 0;
}
