/*
 * Демонстрация рекурсии.
 *
 * Вычисление факториала.
 */
#include <iostream>
using namespace std;

int factr(int _n);
int fact(int _n);

int main()
{
    /*
     * Используем рекурсивный вариант.
     */
    cout << "4 факториал равен " << factr(4) << "\n";

    /*
     * Используем итеративный вариант.
     */
    cout << "4 факториал равен " << fact(4) << "\n";

    return 0;
}

/*
 * Рекурсивный вариант.
 */
int factr(int _n)
{
    int answer;

    if (_n == 1) return(1);
    answer = factr(_n - 1) * _n;
    return (answer);
}


int fact(int _n)
{
    int t, answer;

    answer = 1;
    for (t = 1; t <= _n; t ++) answer = answer * (t);
    return (answer);
}
