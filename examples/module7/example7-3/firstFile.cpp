/*
 * Пример глобальной статической
 * переменной.
 *
 * Вычисление текущего среднего
 * для чисел, вводимых пользователем.
 * Возможность сброса счетчика.
 * Доработанный пример 7-2.
 *
 * Программа разбита на 2 файла.
 *
 * Файл № 1.
 */
#include <iostream>
using namespace std;

int running_avg(int _i);
void reset();

int main()
{
    int num;

    do
    {
        cout << "Вводите числа (-1 для завершения, -2 для сброса): ";
        cin >> num;

        if(num == -2)
        {
            reset();
            continue;
        }
        if(num != -1)
            cout << "Текущее среднее равно: " << running_avg(num);
        cout << '\n';
    }
    while(num != -1);

    return 0;
}
