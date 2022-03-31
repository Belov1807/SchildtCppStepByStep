/*
 * Проект 4-1
 * Демонстрация сортировки
 * методом всплывающего пузырька.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int nums[10];
    int a, b, t;
    int size;

    // Число элементов.
    size = 10;

    /*
     * Дадим элементам массива случайные
     * начальные значения.
     */
    for (t = 0; t < size; t ++) nums[t] = rand() % 100;

    // вывод на экран исходного массива.
    cout << "Исходный массив:\n";
    for (t = 0; t < size; t ++) cout << nums[t] << ' ';
    cout << "\n";

    // Это пузырьковое упорядочение.
    for (a = 0; a < size; a ++)
    {
        for (b = size - 1; b > a; b --)
        {
            /*
             * Если не в том порядке
             * элементы обмениваются местами.
             */
            if (nums[b-1] > nums[b])
            {
                t = nums[b-1];
                nums[b-1] = nums[b];
                nums[b] = t;
            }
        }
    }

    cout << "\nУпорядоченный массив: \n";
    for (t = 0; t < size; t ++) cout << nums[t] << ' ';
    cout << "\n";

    return 0;
}
