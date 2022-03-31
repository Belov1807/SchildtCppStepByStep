/*
 * Программа заполняет массив
 * числами от 0 до 9.
 */

#include <iostream>
using namespace std;

int main()
{
    int sample[10]; // Резервирование места под 10 элементов типа Int.

    int t;

    // Заполнение массива.
    for (t = 0; t < 10; ++ t) sample[t] = t;

    // Вывод массива.
    for (t = 0; t < 10; ++ t)
    {
        cout << "Это sample[" << t << "]" << sample[t] << "\n";
        cout << "Это адрес " << &sample[t] << "\n";
    }
    return 0;
}
