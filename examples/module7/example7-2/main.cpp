/*
 * Пример статической переменной.
 *
 * Вычисление текущего среднего
 * для чисел, вводимых пользователем.
 */
#include <iostream>
using namespace std;

int running_avg(int _i);

int main()
{
    int num;

    do
    {
        cout << "Вводите числа (-1 для завершения): ";
        cin >> num;

        if(num != -1)
            cout << "Текущее среднее равно: " << running_avg(num);
        cout << '\n';
    }
    while(num > -1);

    return 0;
}

int running_avg(int _i)
{
    static int sum = 0, count = 0;

    sum = sum + _i;

    count ++;

    return sum / count;
}
