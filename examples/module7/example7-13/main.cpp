/*
 * Демонстрация sizeof.
 */
#include <iostream>
using namespace std;

int main()
{
    char ch;
    int i;
    int nums[4];

    /*
     * Размер char.
     */
    cout << sizeof ch << ' ';
    /*
     * Размер int.
     */
    cout << sizeof i << ' ';
    /*
     * Размер float.
     */
    cout << sizeof(float) << ' ';
    /*
     * Размер double.
     */
    cout << sizeof(double) << ' ';
    /*
     * Размер массива из 4-х элементов типа int.
     */
    cout << sizeof(nums) << ' ';

    return 0;
}
