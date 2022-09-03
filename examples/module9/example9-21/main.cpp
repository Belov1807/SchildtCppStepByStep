/*
 * Демонстрация перегрузки ==.
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

    bool operator==(ThreeD &_op1);

    void show();
};

bool ThreeD::operator==(ThreeD &_op1)
{
    if ((x == _op1.x) &&
        (y == _op1.y) &&
        (z == _op1.z))
        return true;
    else
        return false;
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
    ThreeD a(1, 1, 1);
    ThreeD b(2, 2, 2);
    ThreeD c(3, 3, 3);
    ThreeD d(3, 3, 3);

    cout << "Исходное значение a: ";
    a.show();
    cout << "Исходное значение b: ";
    b.show();

    if (a == b) cout << "a равно b\n";
    else cout << "a не равно b\n\n";

    cout << "Исходное значение c: ";
    c.show();
    cout << "Исходное значение d: ";
    d.show();

    if (c == d) cout << "c равно d\n";
    else cout << "c не равно d\n";

    return 0;
}
