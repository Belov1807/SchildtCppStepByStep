/*
 * Программа вводит символы с клавиатуры
 * до ввода символа '$', после ввода символа
 * программа завершается. До завершения
 * программы на экран выводится информация
 * о количестве введенных точек.
 */
#include <iostream>
using namespace std;

int main()
{
    int counter = 0;
    string text = string();
    bool repeat = true;

    cout << "Программа считывает количество введенных Вами точек\n";

    while (repeat == true)
    {
        cout << "Введите символы с клавиатуры \n";
        cout << "Для завершения ввода, введите символ '$'\n";
        cin >> text;

        for (int i = 0; i < (int)text.size(); i ++)
        {
            char symbol = text.at(i);

            if (symbol == '.') counter ++;

            if (symbol == '$')
            {
                repeat = false;
            }
        }
    }
    cout << "Число введенных точек = " << counter << "\n";

    return 0;
}
