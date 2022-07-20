/*
 * Демонстрация присваивания объектов.
 */
#include <iostream>
using namespace std;

class Test
{
    int a, b;
public:
    void setab(int _i, int _j) { a = _i, b = _j; }
    void showab()
    {
        cout << "a равно " << a << '\n';
        cout << "b равно " << b << '\n';
    }
};

int main()
{
    Test ob1, ob2;

    ob1.setab(10, 20);
    ob2.setab(0, 0);
    cout << "ob1 перед присваиванием: \n";
    ob1.showab();
    cout << "ob2 перед присваиванием: \n";
    ob2.showab();
    cout << '\n';

    /*
     * Присвоим объект ob1 объекту ob2.
     */
    ob2 = ob1;

    cout << "ob1 после присваивания: \n";
    ob1.showab();
    cout << "ob2 после присваивания: \n";
    ob2.showab();
    cout << '\n';

    /*
     * Изменим ob1.
     */
    ob1.setab(-1, -1);

    cout << "ob1 после изменения ob1: \n";
    ob1.showab();
    cout << "ob2 после изменения ob1: \n";
    ob2.showab();

    return 0;
}
