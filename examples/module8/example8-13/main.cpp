/*
 * Инкремент и декремент
 * указателя на объект.
 */
#include <iostream>
using namespace std;

class P_example
{
    int num;

public:

    void set_num(int val) { num = val; }
    void show_num(){ cout << num << "\n"; }
};

int main()
{
    P_example ob[2], *p;

    /*
     * Непосредственное обращение к объекту.
     */
    ob[0].set_num(10);
    ob[1].set_num(20);

    /*
   * Получим указатель на первый элемент.
   */
    p = &ob[0];
    /*
     * Выведем значение ob[0] через указатель.
     */
    p->show_num();

    /*
     * Продвинемся к следующему объекту.
     */
    p++;
    /*
     * Выведем значение ob[1] через указатель.
     */
    p->show_num();

    /*
     * Вернемся к предыдущему объекту.
     */
    p--;
    /*
     * Снова выведем значение ob[0].
     */
    p->show_num();

    return 0;
}
