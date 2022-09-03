/*
 * Перегрузка int + объект и объект + int.
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

    friend ThreeD operator+(ThreeD _op1, int _op2);
    friend ThreeD operator+(int _op1, ThreeD _op2);

    void show();
};

/*
 * Эта функция обеспечивает ThreeD + int.
 */
ThreeD operator+(ThreeD _op1, int _op2)
{
    ThreeD temp;

    temp.x = _op1.x + _op2;
    temp.y = _op1.y + _op2;
    temp.z = _op1.z + _op2;
    return temp;
}

/*
 * Эта функция обеспечивает int + ThreeD.
 */
ThreeD operator+(int _op1, ThreeD _op2)
{
    ThreeD temp;

    temp.x = _op2.x + _op1;
    temp.y = _op2.y + _op1;
    temp.z = _op2.z + _op1;
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
    ThreeD b;

    cout << "Исходное значение a: ";
    a.show();

    cout << '\n';

    /*
     * Объект + int.
     */
    b = a + 10;

    cout << "Значение b после b = a + 10: ";
    b.show();

    cout << '\n';

    /*
     * int + Объект.
     */
    b = 10 + a;

    cout << "Значение b после b = 10 + a: ";
    b.show();

    cout << '\n';

    return 0;
}
