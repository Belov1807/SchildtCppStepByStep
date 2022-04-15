/*
 * Возврат указателя.
 */
#include <iostream>
using namespace std;

char *get_substr(char *_sub, char *_str);

int main()
{
    char *substr;

    substr = get_substr("три", "один два три четыре");

    cout << "подстройка найдена: " << substr << "\n";

    return 0;
}

/*
 * Возвращает указатель на
 * подстроку или нулевой указатель,
 * если подстрока не найдена.
 */
char *get_substr(char *_sub, char *_str)
{
    int t;
    char *p, *p2, *start;

    for (t = 0; _str[t]; t ++)
    {

        /*
         * Начальная установка указателей.
         */
        p = &_str[t];
        start = p;
        p2 = _sub;

        /*
         * Проверка на наличие подстроки.
         */
        while (*p2 && *p2 == *p)
        {
            p ++;
            p2 ++;
        }

        /*
         * Если p2 указывает на завершающий 0
         * (т.е. на конец подстроки), значит,
         * вся подстрока найдена.
         */
        if (!*p2)
        /*
         * Вернуть указатель на начало подстроки.
         */
            return start;
    }

    /*
     * Подстрока не найдена.
     */
    return 0;
}
