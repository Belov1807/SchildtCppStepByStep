/*
 * Эта программа выводит
 * все простые числа в
 * диапазоне от 1 до 100.
 */
#include <iostream>
using namespace std;

int main()
{
    int min = 1;
    int max = 100;

    cout << "Простые числа в диапазоне от " << min << " до " << max <<":\n";

    for (int i = min; i < max + 1; i ++)
    {
        for (int j = 2; j <= i; j ++)
        {
            if (j != i &&
               (i == 1 ||
                i % j == 0))
            {
                break;
            }
            else if (j == i)
            {
                cout << i << ", ";
            }
        }
    }
    cout << "\b\b \n";

    return 0;
}
