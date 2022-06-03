/*
 * Проект 7-1.
 *
 * Циклический сдвиг байта
 * влево на n позиций.
 */
#include <iostream>
using namespace std;

unsigned char rrotate(unsigned char _val, int _n);
unsigned char lrotate(unsigned char _val, int _n);
void show_binary(unsigned int _u);

int main()
{
    char ch = 'T';

    cout << "Исходное значение в двоичном коде:\n";
    show_binary(ch);

    cout << "Циклический сдвиг вправо 8 раз:\n";
    for (int i = 0; i < 8; i ++)
    {
        ch = rrotate(ch, 1);
        show_binary(ch);
    }

    cout << "Циклический сдвиг влево 8 раз:\n";
    for (int i = 0; i < 8; i ++)
    {
        ch = lrotate(ch, 1);
        show_binary(ch);
    }

    return 0;
}

/*
 * Циклический сдвиг байта
 * влево на n позиций.
 */
unsigned char lrotate(unsigned char _val, int _n)
{
    unsigned int t;

    t = _val;

    for (int i = 0; i < _n; i ++)
    {
        t = t << 1;

        /*
         * Если бит выдвигается из байта,
         * это будет бит 8 целого числа t.
         * В этом случае поместим этот бит
         * с правой сторогы t.
         */
        if (t & 256)
            /*
             * Поместим 1 в самый правый бит.
             */
            t = t | 1;
    }

    /*
     * Вернем младшие 8 бит.
     */
    return t;
}

/*
 * Циклический сдвиг байта вправо на n позиций.
 */
unsigned char rrotate(unsigned char _val, int _n)
{
    unsigned int t;

    t = _val;

    /*
     * Сначала сдвинем значение на 8 бит влево.
     */
    t = t << 8;

    for (int i = 0; i < _n; i ++)
    {
        t = t >> 1;

        /*
         * Если бит выдвигается из байта, это будет
         * бит 7 целого числа t. В этом случае
         * поместим этот бит с левой стороны t.
         */
        if (t & 128)
            /*
             * Поместим 1 в самый левый бит.
             */
            t = t | 32768;
    }

    /*
     * Наконец сдвинем результат
     * назад в младшие 8 бит t.
     */
    t = t >> 8;

    return t;
}

/*
 * Выведем на экран биты байта.
 */
void show_binary(unsigned int _u)
{
    int t;

    for (t = 128; t > 0; t = t / 2)
        if (_u & t) cout << "1 ";
        else cout << "0 ";

    cout << "\n";
}
