/*
 * Программа вводит символы с клавиатуры и
 * преобразует строчные буквы в прописные,
 * а прописные - в строчные. Результат выводится
 * на экран. Программа завершается при вводе
 * символа '.'. Перед завершением выводится
 * количество выполненных преобразований.
 */
#include <iostream>
#include <string>

using namespace std;

int main()
{
    bool finish = false;
    int count = 0;

    cout << "Программа вводит символы с клавиатуры\n"
         << "и преобразует строчные буквы в прописные,\n"
         << "а прописные - в строчные.\n";

    while (!finish)
    {
        string frase = string();

        cout << "Для завершения работы программы введите точку (\".\")\n";
        cout << "Выполните ввод: \n";
        cin >> frase;

        string newFrase;

        for (int i = 0; i < (int)frase.size(); i ++)
        {
            char symbol = frase.at(i);
            char newSymbol;
            if (symbol >= 'a' &&
                    symbol <= 'z') newSymbol = symbol - 32;
            else  if (symbol >= 'A' &&
                      symbol <= 'Z') newSymbol = symbol + 32;
            else
            {
                newSymbol = symbol;
                count --;
                if (symbol == '.') finish = true;
            }

            newFrase.push_back(newSymbol);
            count ++;
        }

        cout << "Преобразованный текст: \n";
        cout << newFrase << "\n";
    }

    cout << "Количество преобразований: " << count << "\n";
    cout << "Программа завершена.\n";

    return 0;
}
