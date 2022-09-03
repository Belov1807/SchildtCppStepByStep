/*
 * Перегрузка постфиксного
 * варианта унарного оператора ++.
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

    /*
     * Постфиксный вариант ++.
     */
    ThreeD operator++(int _notused);

    void show();
};

/*
 * Перегрузим постфиксный вариант ++.
 */
ThreeD ThreeD::operator++(int _notused)
{
    /*
     * Сохраним исходное значение.
     */
    ThreeD temp = *this;

    /*
     * Инкремент x, y, и z.
     */
    x ++;
    y ++;
    z ++;
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

    cout << "Исходное значение a: ";
    a.show();

    /*
     * Инкремент a.
     */
    a ++;
    cout << "Значение после a ++: ";
    a.show();

    return 0;
}
