/*
 * Программа демонстрирует
 * работу функции возвращающей
 * последовательность чисел,
 * каждое из которых на 3
 * больше предыдущего, а также
 * работу функции обнуляющей
 * эту последовательность.
 */

#include <iostream>
using namespace std;

int subsequence = 0;

int byThrees();

void reset();

void sequenceOutput(int _count);

int main()
{
    sequenceOutput(10);
    reset();
    sequenceOutput(12);

    return 0;
}

int byThrees()
{
    int oldSubsequence = subsequence;
    subsequence += 3;

    return oldSubsequence;
}

void reset()
{
    cout << "reset()\n";

    subsequence = 0;
}

void sequenceOutput(int _count)
{
    cout << "Последовательность: ";

    for (int i = 0; i < _count - 1; i ++)
    {
        cout << byThrees() << ", ";
    }
    cout << byThrees() << endl;
}
