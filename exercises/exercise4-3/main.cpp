/*
 * Программа подсчитывает число
 * прописных букв в строке и выводит
 * результат на экран.
 */
#include <iostream>
using namespace std;

int main()
{
    char line[70];
    int count = 0;

    cout << "Введите строку:\n";
    cin >> line;

    for (int i = 0; line[i]; i ++)
    {
        if (isupper(line[i])) count ++;
    }

    cout << "Количество прописных букв в строке = " << count << "\n";

    return 0;
}
