/*
 * Простой генератор поговорок,
 * который демонстрирует использование
 * предложения switch.
 */

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Введите число от 1 до 3: ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "Лучше синица в руках чем журавль в небе.\n";
        break;
    case 2:
        cout << "У дурака деньги долго не держаться.\n";
        break;

    case 3:
        cout << "Лучше синица в руках чем журавль в небе.\n";
        break;

    default:
        cout << "Вы можете вводить только 1, 2 или 3.\n";
    }
    return 0;
}
