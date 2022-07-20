/*
 * Передача функции объекта.
 */
#include <iostream>
using namespace std;

class MyClass
{
    int val;
public:
    MyClass(int _i)
    {
        val = _i;
    }

    int getval() { return val; }
    void setval(int _i) { val = _i; }
};

void display(MyClass _ob)
{
    cout << _ob.getval() << '\n';
}

void change(MyClass _ob)
{
    /*
     * Не влияет на аргумент.
     */
    _ob.setval(100);

    cout << "Значение ob внутри change(): ";
    display(_ob);
}

int main()
{
    MyClass a(10);

    cout << "Значение перед вызовом change(): ";
    display(a);

    change(a);
    cout << "Значение после вызова change(): ";
    display(a);

    return 0;
}
