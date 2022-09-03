/*
 * Использование дружественной
 * операторной функции.
 */
#include <iostream>
using namespace std;

class ThreeD
{
    /*
     * Трехмерные координаты.
     */
    int x, y, z;

public:

    ThreeD() { x = y = z = 0; }
    ThreeD(int _i, int _j, int _k) {x = _i; y = _j; z = _k; }

    friend ThreeD operator+(ThreeD _op1, ThreeD _op2);

    void show();
};

/*
 * + теперь является дружественной функцией.
 */
ThreeD operator+(ThreeD _op1, ThreeD _op2)
{
    ThreeD temp;

    temp.x = _op1.x + _op2.x;
    temp.y = _op1.y + _op2.y;
    temp.z = _op1.z + _op2.z;
    return temp;
}

/*
 * Выведем координаты X, Y, Z.
 */
void ThreeD::show()
{
    cout << x << ", ";
    cout << y << ", ";
    cout << z << "\n";
}

int main()
{
    ThreeD a(1, 2, 3);
    ThreeD b(10, 10, 10);
    ThreeD c;

    cout << "Исходное значение a: ";
    a.show();
    cout << "Исходное значение b: ";
    b.show();

    cout << '\n';

    /*
     * Сложим a и b.
     */
    c = a + b;

    cout << "Значение c после c = a + b.";
    c.show();

    cout << '\n';

    /*
     * Сложим a, b и c.
     */
    c = a + b + c;
    cout << "Значение после c = a + b + c: ";
    c.show();

    cout << "\n";

    /*
     * Демонстрация множественного присваивания.
     */
    c = b = a;
    cout << "Значение c после c = b = a: ";
    c.show();
    cout << "Значение b после c = b = a: ";
    b.show();

    return 0;
}
