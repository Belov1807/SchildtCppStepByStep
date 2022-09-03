/*
 * Демонстрация перегрузки префиксного и
 * постфиксного вариантов унарного оператора ++.
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
     * Префиксный вариант ++.
     */
    ThreeD operator++();

    /*
     * Постфиксный вариант ++.
     */
    ThreeD operator++(int _notused);

    void show();
};

/*
 * Перегрузим префиксный вариант ++.
 */
ThreeD ThreeD::operator++()
{
    /*
     * Инкремент x, y, и z.
     */
    x ++;
    y ++;
    z ++;
    return * this;
}

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
    ThreeD b;

    cout << "Исходное значение a: ";
    a.show();

    cout << '\n';

    /*
     * Префиксный инкремент.
     */
    ++ a;
    cout << "Значение после ++ a: ";
    a.show();


    /*
     * Постфиксный инкремент.
     */
    a ++;
    cout << "Значение после a ++: ";
    a.show();

    cout << '\n';

    /*
     * b получает значение a после инкремента.
     */
    b = ++ a;

    cout << "Значение a после b = ++ a: ";
    a.show();
    cout << "Значение b после b = ++ a: ";
    b.show();

    cout << "\n";

    /*
     * b получает значение a перед инкрементом.
     */
    b = a ++;
    cout << "Значение a после b = a ++: ";
    a.show();
    cout << "Значение b после b = a ++: ";
    b.show();

    return 0;
}
