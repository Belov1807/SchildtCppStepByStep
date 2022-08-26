/*
 * Дружественные функции могут быть
 * друзьями двух или более классов.
 */
#include <iostream>
using namespace std;

/*
 * Упреждающее объявление.
 */
class Cylinder;

enum colors { red, green, yellow };

class Cube
{
    colors color;

public:
    Cube(colors _c) { color = _c; }
    friend bool sameColor(Cube _x, Cylinder _y);
    // ...
};

class Cylinder
{
    colors color;
public:
    Cylinder(colors _c) { color= _c; }
    friend bool sameColor(Cube _x, Cylinder _y);
    // ...
};

bool sameColor(Cube _x, Cylinder _y)
{
    if (_x.color == _y.color) return true;
    else return false;
}

int main()
{
    Cube cube1(red);
    Cube cube2(green);
    Cylinder cyl(green);

    if (sameColor(cube1, cyl))
        cout << "Куб 1 и цилиндр одного цвета.\n";
    else
        cout << "Куб 1 и цилиндр разных цветов.\n";

    if(sameColor(cube2, cyl))
        cout << "Куб 2 и цилиндр одного цвета.\n";
    else
        cout << "Куб 2 и цилиндр разных цветов.\n";

    return 0;
}
