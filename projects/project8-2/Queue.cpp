/*
 * Проект 8-2.
 *
 * Класс очереди символов.
 */

#include <iostream>
using namespace std;

const int maxQsize = 100;

class Queue
{
    /*
     * массив для хранения очереди.
     */
    char q[maxQsize];
    /*
     * Максимальное число элементов
     * которые могут находится в очереди.
     */
    int size;
    /*
     * Индексы "положить" и "взять".
     */
    int putloc, getloc;

public:
    /*
     * Сконструируем очередь конкретной длины.
     */
    Queue(int _len)
    {
        /*
         * Размер очереди должен быть
         * меньше max и положителен.
         */
        if (_len > maxQsize) _len = maxQsize;
        else if (_len <= 0) _len = 1;

        size = _len;
        putloc = getloc = 0;
    }

    /*
     * Поместим символ в очередь.
     */
    void put(char _ch)
    {
        if (putloc == size)
        {
            cout << " -- Очередь полна.\n";
            return;
        }

        putloc ++;
        q[putloc] = _ch;
    }

    /*
     * Извлечем символ из очереди.
     */
    char get()
    {
        if (getloc == putloc)
        {
            cout << " -- Очередь пуста.\n";
            return 0;
        }

        getloc ++;
        return q[getloc];
    }
};

int main()
{
    Queue bigQ(100);
    Queue smallQ(4);

    char ch;
    int i;

    cout << "Используем bigQ для хранения латинского алфавита.\n";

    /*
     * Поместим в bigQ буквы алфавита.
     */
    for (i = 0; i < 26; i ++)
        bigQ.put('A' + i);

    /*
     * Извлечем и выведем на экран элементы из bigQ.
     */
    cout << "Содержимое bigQ: ";

    for (i = 0; i < 26; i ++)
    {
        ch = bigQ.get();
        if (ch != 0) cout << ch;
    }

    cout << "\n\n";

    /*---------------------*/

    cout << "Используем smallQ для демонстрации ошибок.\n";

    /*
     * Теперь используем smallQ для демонстрации ошибок.
     */
    for (i = 0; i < 5; i ++)
    {
        cout << "Пытаемся записать "
             << (char) ('Z' - i);

        smallQ.put('Z' - i);

        cout << '\n';
    }

    cout << '\n';

    /*
     * Другая ошибка в smallQ.
     */
    cout << "Содержимое smallQ: ";

    for (i = 0; i < 5; i ++)
    {
        ch = smallQ.get();
        if (ch != 0) cout << ch;
    }

    cout << '\n';

    return 0;
}
