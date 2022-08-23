/*
 * Конструктор копий активизируется,
 * когда объект передается функции.
 */
#include <iostream>
using namespace std;

class MyClass
{
    int val;
    int copynumber;
public:
    /*
     * Обычный конструктор.
     */
    MyClass(int _i)
    {
        val = _i;
        copynumber = 0;
        cout << "Внутри обычного конструктора\n";
    }

    /*
     * Конструктор копирования.
     */
    MyClass(const MyClass &_o)
    {
        val = _o.val;
        copynumber = _o.copynumber + 1;
        cout << "Внутри конструктора копирования\n";
    }

    ~MyClass()
    {
        if (copynumber == 0)
            cout << "Уничтожение оригинала\n";
        else
            cout << "Уничтожение копии " <<
                    copynumber << "\n";
    }

    int getval() { return val; }
};

void display(MyClass _ob)
{
    cout << _ob.getval() << '\n';
}

int main()
{
    MyClass a(10);

    display(a);

    return 0;
}
