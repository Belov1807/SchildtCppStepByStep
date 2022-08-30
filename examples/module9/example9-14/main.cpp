/*
 * Определение + и = для класса ThreeD.
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
    ThreeD(int _i, int _j, int _k) { x = _i; y = _j; z = _k; }

    /*
     * op1 подразумевается.
     */
    ThreeD operator+(ThreeD _op2);
    ThreeD operator=(ThreeD _op2);

    void show();
};

/*
 * Перегрузим +.
 */
ThreeD ThreeD::operator+(ThreeD _op2)
{
    ThreeD temp;

    /*
     * Это сложениие целых чисел и по
     * отношению к ним знак +  сохраняет
     * свое первоначальное назначение.
     */
    temp.x = x + _op2.x;
    temp.y = y + _op2.x;
    temp.z = z + _op2.z;
    return temp;
}

/*
 * Перегрузим присваивание.
 */
ThreeD ThreeD::operator=(ThreeD _op2)
{
    /*
     * Это присваивание целых чисел и по
     * отношению к ним знак =  сохраняет
     * свое первоначальное назначение.
     */
    x = _op2.x;
    y = _op2.y;
    z = _op2.z;
    return * this;
}

/*
 * Вывести координаты X, Y, Z.
 */
void ThreeD::show()
{
    cout << x << ", ";
    cout << y << ", ";
    cout << z << "\n";
}

int main()
{
    ThreeD a(1, 2, 3), b(10, 10, 10), c;

    cout << "Исходное значение a: ";
    a.show();
    cout << "Исходное значение b: ";
    b.show();

    cout << "\n";

    /*
     * Сложим a и b.
     */
    c = a + b;
    cout << "Значение после c = a + b: ";
    c.show();

    cout << "\n";

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
