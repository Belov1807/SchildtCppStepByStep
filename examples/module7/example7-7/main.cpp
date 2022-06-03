/*
 * Преобразование в строчные
 * буквы с помощью побитового ИЛИ.
 */

#include <iostream>
using namespace std;

int main()
{
    char ch;

    for(int i = 0 ; i < 10; i ++)
    {
        ch = 'A' + i;
        cout << ch;

        /*
         * Это предложение устанавливает 6-й бит.
         *
         * Буква ch теперь строчная.
         */
        ch = ch | 32;

        cout << ch << " ";
    }

    cout << "\n";

    return 0;
}
