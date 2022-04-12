/*
 * Простая программа, демонстрирующая
 * возврат значения.
 */
#include <iostream>
using namespace std;

/*
 * Вернем объем..
 */
int box(int _lenght, int _width, int _height);

int main()
{
    int answer;
    answer = box(10, 11, 3);

    cout << "Объем равен " << answer << "\n";
    return 0;
}

/*
 * Эта функция возвращает значение.
 */
int box(int _lenght, int _width, int _height)
{
    return _lenght * _width * _height;
}
