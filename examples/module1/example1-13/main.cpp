/*
 * Программа усредняет абсолютные значения
 * пяти произвольных чисел, вводимых пользователем.
*/
#include <iostream>
using namespace std;

int main()
{
    // Первое число.
    int firstNumber  = 0;
    // Второе число.
    int secondNumber = 0;
    // Третье число.
    int thirdNumber  = 0;
    // Четвертое число.
    int fourthNumber = 0;
    // Пятое число.
    int fifthNumber  = 0;
    // Результат.
    int result = 0;

    cout << "Введите первое число: ";
    cin >> firstNumber;

    cout << "Введите второе число: ";
    cin >> secondNumber;

    cout << "Введите третье число: ";
    cin >> thirdNumber;

    cout << "Введите четвертое число: ";
    cin >> fourthNumber;

    cout << "Введите пятое число: ";
    cin >> fifthNumber;

    result = (abs(firstNumber) + abs(secondNumber) + abs(thirdNumber) + abs(fourthNumber) + abs(fifthNumber)) / 5;

    cout << "Усредненное абсолютное значение пяти введенных чисел: " << result << endl;

    return 0;
}
