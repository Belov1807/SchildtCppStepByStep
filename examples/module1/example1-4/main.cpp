/*
 * Интерактивная программа, вычисляющая
 * площадь прямоугольника.
*/

#include <iostream>
using namespace std;

int main()
{
    int length;                                 // Объявление переменной.
    int width;                                  // Объявление другой переменной.

    cout << "Введите длину: ";
    cin >> length;                              // Ввод длины.

    cout << "Введите ширину: ";
    cin >> width;                               // Ввод ширины.

    cout << "Площадь равна " << length * width; // Вывод площади.
    cout << endl;

    return 0;
}
