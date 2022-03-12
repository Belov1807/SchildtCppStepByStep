/*
 * Эта программа демонстрирует различие
 * между целыми числами со знаком и без знака.
*/
#include <iostream>
using namespace std;

int main()
{
    // Короткое целое со знаком.
    short int i;
    // Короткое целое без знака.
    short unsigned int j;

    j = 60000;
    i = j;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    return 0;
}
