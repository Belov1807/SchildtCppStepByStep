/*
 * Дружественная функция может быть
 * членом одного класса и другом другого.
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
    bool sameColor(Cylinder _y);
    // ...
};

class Cylinder
{
    colors color;
public:
    Cylinder(colors _c) { color= _c; }
    friend bool Cube::sameColor(Cylinder _y);
    // ...
};

bool Cube::sameColor(Cylinder _y)
{
    if (color == _y.color) return true;
    else return false;
}

int main()
{
    Cube cube1(red);
    Cube cube2(green);
    Cylinder cyl(green);

    if (cube1.sameColor( cyl))
        cout << "Куб 1 и цилиндр одного цвета.\n";
    else
        cout << "Куб 1 и цилиндр разных цветов.\n";

    if(cube2.sameColor(cyl))
        cout << "Куб 2 и цилиндр одного цвета.\n";
    else
        cout << "Куб 2 и цилиндр разных цветов.\n";

    return 0;
}
