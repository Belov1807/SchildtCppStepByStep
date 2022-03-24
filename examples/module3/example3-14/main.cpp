/*
 * В этой программе цикл
 * выполняется, пока пользователь
 * не введет число 100.
 */

#include <iostream>

using namespace std;

int main()
{
    int num;

    do
    {
        cout << "Введите число (100 для завершения): ";
        cin >> num;
    }
    while (num != 100);
    return 0;
}
