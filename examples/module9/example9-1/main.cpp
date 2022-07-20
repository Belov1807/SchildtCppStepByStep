/*
 * Перегрузка конструкторов.
 */
#include <iostream>
using namespace std;

class Sample
{
public:
    int x;
    int y;

    /*
     * Перегрузим конструктор по умолчанию.
     */
    Sample() { x = y = 0; }

    /*
     * Конструктор с одним параметром.
     */
    Sample(int _i) { x = y = _i; }

    /*
     * Конструктор с двумя параметрами.
     */
    Sample(int _i, int _j) { x = _i; y = _j; }
};

int main()
{
    /*
     * Активизация конструктора по умолчанию.
     */
    Sample t;
    /*
     * Используем Sample(int).
     */
    Sample t1(5);
    /*
     * Используем Sample(int, int).
     */
    Sample t2(9, 10);

    cout << "t.x: " << t.x << ", t.y: " << t.y << "\n";
    cout << "t1.x: " << t1.x << ", t1.y: " << t1.y << "\n";
    cout << "t2.x: " << t2.x << ", t2.y: " << t2.y << "\n";

    return 0;
}
