/*
 * Передача в функцию массива
 * с указанием типа и размера.
 */
#include <iostream>
using namespace std;

void display(int _num[10]);

int main()
{
    int t[10], i;

    for (i = 0; i < 10; ++ i) t[i] = i;

    /*
     * Передача в функцию массива t.
     */
    display(t);

    return 0;
}

void display(int _num[10])
{
    int i ;
    for (i = 0; i < 10; i ++) cout << _num[i] << ' ';
    cout << "\n";
}
