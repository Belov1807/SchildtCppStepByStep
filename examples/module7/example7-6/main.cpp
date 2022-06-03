/*
 * Преобразование в прописные
 * буквы с помощью побитового И.
 */
#include <iostream>
using namespace std;

int main()
{
    char ch;

    for(int i = 0 ; i < 10; i ++)
    {
        ch = 'a' + i;
        cout << ch;

    /*
     * Это предложение сбрасывает 6-й бит.
     *
     * Буква ch теперь прописная.
     */
        ch = ch & 223;

        cout << ch << " ";
    }

    cout << "\n";

    return 0;
}
