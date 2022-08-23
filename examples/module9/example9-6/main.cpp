/*
 * Возврат объектов.
 */
#include <iostream>
using namespace std;

class MyClass
{
    int val;
public:
    /*
     * Обычный конструктор.
     */
    MyClass(int _i)
    {
        val = _i;
        cout << "Внутри конструктора\n";
    }

    ~MyClass()
    {
        cout << "Уничтожаем\n";
    }

    int getval() { return val; }

    /*
     * Возврат объекта.
     */
    MyClass mkBigger()
    {
        MyClass o(val * 2);

        return o;
    }
};

void display(MyClass _ob)
{
    cout << _ob.getval() << '\n';
}

int main()
{
    cout << "Перед конструированием a.\n";
    MyClass a(10);
    cout << "После конструирования a.\n\n";

    cout << "Перед вызовом display().\n";
    display(a);
    cout << "После возврата из display().\n";

    cout << "Перед вызовом mkBigger().\n";
    a = a.mkBigger();
    cout << "После возврата из mkBigger().\n";

    cout << "Перед вторым вызовом display().\n";
    display(a);
    cout << "После возврата из display().\n";

    return 0;
}
