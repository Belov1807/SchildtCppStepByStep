/*
 * Демонстрация перегрузки префиксного и
 * постфиксного вариантов унарного оператора ++
 * с помощью дружественных функций.
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

    friend ThreeD operator++(ThreeD &_op1);
    friend ThreeD operator++(ThreeD &_op1, int _notused);

    void show();
};

/*
 * Перегрузка префиксной операции ++
 * с помощью дружественной функции.
 * Такая перегрузка требует
 * использования параметра ссылки.
 */
ThreeD operator++(ThreeD &_op1)
{
    _op1.x ++;
    _op1.y ++;
    _op1.z ++;
    return _op1;
}

/*
 * Перегрузка постфиксной операции ++
 * с помощью дружественной функции.
 * Такая перегрузка требует
 * использования параметра ссылки.
 */
ThreeD operator++(ThreeD &_op1, int _notused)
{
    ThreeD temp = _op1;

    _op1.x ++;
    _op1.y ++;
    _op1.z ++;
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
