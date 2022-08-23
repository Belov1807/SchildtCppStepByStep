/*
 * Конструкторы, деструкторы и
 * передача объектов по ссылке.
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
        cout << "Внутри конструктора\n";
    }

    ~MyClass() { cout << "Уничтожаем\n"; }
    int getval() { return val; }
    void setval(int _i) {val = _i;}
};

void display(MyClass &_ob)
{
    cout << _ob.getval() << '\n';
}

void change(MyClass &_ob)
{
    _ob.setval(100);
}

int main()
{
    MyClass a(10);

    cout << "Перед вызовом display().\n";
    display(a);
    cout << "После возврата из display().\n";

    change(a);
    cout << "После вызова change().\n";
    display(a);

    return 0;
}
