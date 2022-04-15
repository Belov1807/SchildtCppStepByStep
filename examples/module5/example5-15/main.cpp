/*
 * Измерение содержимого
 * массива с помощью функции.
 */
#include <iostream>
using namespace std;

void cube(int *_n, int _num);

int main()
{
    int i, nums[10];

    for (i = 0; i < 10; i ++) nums[i] = i + 1;

    cout << "Исходное содержимое: ";
    for (i = 0; i < 10; i++) cout << nums[i] << ' ';
    cout << '\n';

    /*Вычисление кубов*/
    cube(nums, 10);

    cout << "Измененное содержимое: ";
    for (i = 0; i < 10; i ++) cout << nums[i] << ' ';
    cout << "\n";

    return 0;
}

/*
 * Возведение в куб элементов массива.
 */
void cube(int *_n, int _num)
{
    while(_num)
    {
        *_n = *_n * *_n * *_n;
        _num --;
        _n ++;
    }
}
