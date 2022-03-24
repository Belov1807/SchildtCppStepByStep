/*
 * Программа выводит линию точек.
 * Число точек определяется
 * значением введенным пользователем.
 *
 */

#include <iostream>

using namespace std;

int main()
{
    int len;

    cout << "Введите длину (от 1 до 79): ";
    cin >> len;

    while (len > 0 && len < 80)
    {
        cout << '.';
        len --;
    }
    cout << "\n";
    return 0;
}
