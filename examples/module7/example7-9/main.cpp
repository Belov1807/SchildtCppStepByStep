/*
 * Программа отображает двоичный
 * код числа, обратный код двоичному
 * коду числа, полученный при помощи
 * оператора НЕ (~).
 */
#include <iostream>
using namespace std;

void show_binary(unsigned int _u);

int main()
{
    unsigned u;

    cout << "Введите число между 0 и 255: ";
    cin >> u;

    cout << "Вот двоичный код числа: ";
    show_binary(u);

    cout << "Вот обратный код числа: ";
    show_binary(~u);

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
