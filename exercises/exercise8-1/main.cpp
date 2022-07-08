/*
 * Программа находит гипотенузу
 * и площадь прямоугольного
 * треугольника.
 */
#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{

public:
    Triangle(double _baseLength, double _height);

    double hypot();
    double area();

    double getBaseLength() const;
    double getHeight() const;

private:
    double baseLength;
    double height;
};

Triangle::Triangle(double _baseLength, double _height)
{
    baseLength = _baseLength;
    height = _height;
}

double Triangle::hypot()
{
    return sqrt(pow(height, 2) + pow(baseLength, 2));
}

double Triangle::area()
{
    return baseLength * height / 2;
}

double Triangle::getBaseLength() const
{
return baseLength;
}

double Triangle::getHeight() const
{
return height;
}

int main()
{
    Triangle triangle(5.45, 7.32);

    cout << "Длина основания прямоугольного треугольника = "
         << triangle.getBaseLength() << '\n';
    cout << "Высота прямоугольного треугольника = "
         << triangle.getHeight() << '\n';

    cout << "Гипотенуза треугольника = "
         << triangle.hypot() << '\n';
    cout << "Площадь треугольника = "
         << triangle.area() << '\n';

    return 0;
}
