/*
 * Эта программа выводит латинский алфавит.
*/
#include <iostream>
using namespace std;

int main()
{
    char letter;

    for (letter = 'A'; letter <= 'Z'; letter ++)
    {
        cout << letter;
    }

    return 0;
}
