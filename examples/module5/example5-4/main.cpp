/*
 * Программа возводит целое число
 * в целую положительную степень,
 * если степень отрицательная
 * срабатывает return.
 */
#include <iostream>
using namespace std;

void power(int _base, int _exp);
int main ()
{
    power(10, 2);
    power(10 ,-2);

    return 0;
}

/*Возведение целого числа в целую положительную степень.*/
void power(int _base, int _exp)
{
    int i;
    /*Возврат, если exp отрицательно.*/
    if (_exp < 0) return ;

    i = 1;
    for( ; _exp; _exp--) i = _base * i;
    cout << "Ответ: " << i << "\n";
}
