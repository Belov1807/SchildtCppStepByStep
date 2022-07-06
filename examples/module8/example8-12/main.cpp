/*
 * Простой пример использования
 * указателя на объект.
 */
#include <iostream>
using namespace std;

class P_example
{
    int num;

public:
    void set_num(int val) { num = val; }
    void show_num(){ cout << num << '\n'; }
};

int main()
{
    /*
     * Объявляем объект
     * и указатель на него.
     */
    P_example ob, *p;

    /*
     * Вызов функции непосредственно через ob.
     */
    ob.set_num(1);
    ob.show_num();

    /*
     * Присвоим p значение адреса ob.
     */
    p = &ob;
    /*
     * Вызов функции посредством указателя на ob.
     */
    p->set_num(20);
    p->show_num();

    return 0;
}
