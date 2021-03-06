/*
 * Программа просматривает массив
 * из 10-ти целых чисел в поисках
 * двух одинаковых значений.
 * Все найденные пары программа
 * выводит на экран.
 */
#include <iostream>
using namespace std;

int main()
{
    int array[10] = {9,2,8,4,3,6,7,8,4,11};

    cout << "Программа просматривает массив из 10-ти целых чисел в поисках одинаковых значений\n\n";
    cout << "Исходный массив:\n";

    for (int i = 0; i < 10; i ++)
    {
        cout << array[i];
        cout << ",";
    }
    cout << "\b \n\n";

    cout << "Одинаковые значения:\n";

    for (int i = 0; i < 10; i ++)
    {
        for (int j = i + 1; j < 10; j ++)
        {
            if (array[i] == array[j])
            {
                cout << "\nЗначение:\n";
                cout << array[i] << "\n" << "Повторяющиеся элементы:\n" << "array[" << i << "]\n" << "array[" << j << "]" "\n";
            }
        }
    }
    return 0;
}
