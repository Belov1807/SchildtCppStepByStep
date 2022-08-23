/*
 * Конструкторы, деструкторы и
 * передача объектов.
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
};

void display(MyClass _ob)
{
    cout << _ob.getval() << '\n';
}

int main()
{
    MyClass a(10);

    cout << "Перед вызовом display().\n";
    display(a);
    cout << "После возврата из display().\n";

    return 0;
}
