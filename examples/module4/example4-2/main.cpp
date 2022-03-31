/*
 * Программа вычисляет среднее и находит
 * минимальное и максимальное значения.
 */

#include <iostream>
using namespace std;

int main()
{
    int i, avg, min_val, max_val;
    int nums[10];

    nums[0] = 10;
    nums[1] = 12;
    nums[2] = 78;
    nums[3] = 3;
    nums[4] = 211;
    nums[5] = 124;
    nums[6] = 5;
    nums[7] = 15;
    nums[8] = 88;
    nums[9] = 93;

    // Вычисляем среднее значение.
    avg = 0;
    for (i = 1; i < 10; i ++) avg += nums[i];
    avg /= 10;

    cout << "Среднее значение = " << avg << "\n";

    // Найдем минимальное и максимальное значения.
    min_val = max_val = nums[0];

    for (i = 1; i < 10; i ++)
    {
        if (nums[i] < min_val) min_val = nums[i];
        if (nums[i] > max_val) max_val = nums[i];
    }

    cout << "Минимальное значение = " << min_val << "\n";
    cout << "Максимальное значение = " << max_val << "\n";

    return 0;
}
