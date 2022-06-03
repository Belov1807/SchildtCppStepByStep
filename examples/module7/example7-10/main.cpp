/*
 * Пример операции сдвига.
 */
#include <iostream>
using namespace std;

void show_binary(unsigned int _u);

int main()
{
    int i=1, t;

    /*
     * Сдвиг влево.
     */
    for (t = 0; t < 8; t ++)
    {
        show_binary(i);
        i = i << 1;
    }

    cout << "\n";

    /*
     * Сдвиг вправо.
     */
    for(t = 0; t < 8; t ++)
    {
        i = i >> 1;
        show_binary(i);
    }

    return 0;
}

/*
 * Отображение битов байта.
 */
void show_binary(unsigned int _u)
{
    int t;

    for (t = 128; t > 0; t = t / 2)
        if (_u & t) cout << "1 ";
        else cout << "0 ";

    cout << "\n";
}
