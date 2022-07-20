/*
 * Класс очереди символов.
 * Помимо char в очередь теперь можно
 * добавлять объекты типа int и double.
 */
#include <queue>
#include <iostream>
using namespace std;

const int maxQsize = 100;

class Queue
{
    /*
     * Массив char для хранения очереди.
     */
    char cq[maxQsize];
    /*
     * Массив double для хранения очереди.
     */
    double dq[maxQsize];
    /*
     * Массив int для хранения очереди.
     */
    int iq[maxQsize];
    /*
     * Максимальное число элементов
     * которые могут находится в очереди.
     */
    int size;
    /*
     * Индексы "положить" и "взять".
     */
    int putloc, getloc;

    /*
     * Проверка на пустую очередь.
     */
    bool isEmpty()
    {
        if (getloc == putloc)
        {
            cout << " -- Очередь пуста.\n";
            return true;
        }
        return false;
    }

    /*
     * Проверка на полную очередь.
     */
    bool isFull()
    {
        if (putloc == size)
        {
            cout << " -- Очередь полна.\n";
            return true;
        }
        return false;
    }

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
     * Поместим символ в формате char в очередь.
     */
    void put(char _ch)
    {
        if (isFull()) return;

        putloc ++;
        cq[putloc] = _ch;
    }
    /*
     * Поместим символ в формате double в очередь.
     */
    void put(double _ch)
    {
        if (isFull()) return;

        putloc ++;
        dq[putloc] = _ch;
    }
    /*
     * Поместим символ в формате int в очередь.
     */
    void put(int _ch)
    {
        if (isFull()) return;

        putloc ++;
        iq[putloc] = _ch;
    }

    /*
     * Извлечем символ из очереди в формате char.
     */
    char getChar()
    {
        if (isEmpty()) return 0;

        getloc ++;
        return cq[getloc];
    }
    /*
     * Извлечем символ из очереди в формате double.
     */
    double getDouble()
    {
        if (isEmpty()) return 0;

        getloc ++;
        return dq[getloc];
    }
    /*
     * Извлечем символ из очереди в формате int.
     */
    int getInt()
    {
        if (isEmpty()) return 0;

        getloc ++;
        return iq[getloc];
    }
};

int main()
{
    Queue bigQChar(100);
    Queue smallQChar(4);

    Queue bigQDouble(101);
    Queue smallQDouble(5);

    Queue bigQInt(102);
    Queue smallQInt(6);

    char ch;
    double db;
    int i;

    cout << "Используем bigQChar для хранения латинского алфавита.\n";

    /*
     * Поместим в bigQ буквы алфавита.
     */
    for (i = 0; i < 30; i ++)
        bigQChar.put((char)('A' + i));

    /*
     * Извлечем и выведем на экран элементы из bigQ.
     */
    cout << "Содержимое bigQChar: ";

    for (i = 0; i < 26; i ++)
    {
        ch = bigQChar.getChar();
        if (ch != 0) cout << ch;
    }

    cout << "\n\n";

    /*---------------------*/

    cout << "Используем smallQChar для демонстрации ошибок.\n";

    /*
     * Теперь используем smallQ для демонстрации ошибок.
     */
    for (i = 0; i < 5; i ++)
    {
        cout << "Пытаемся записать "
             << (char) ('Z' - i);

        smallQChar.put((char)('Z' - i));

        cout << '\n';
    }

    cout << '\n';

    /*
     * Другая ошибка в smallQ.
     */
    cout << "Содержимое smallQChar: ";

    for (i = 0; i < 5; i ++)
    {
        ch = smallQChar.getChar();
        if (ch != 0) cout << ch;
    }

    cout << '\n';
    cout << "--------------------------------------------\n";


    ////////////////////////////////////
    cout << "Используем bigQDouble для хранения чисел с плавающей точкой в диапазоне 3.14 - 32.14.\n";

    /*
     * Поместим в bigQDouble числа с плавающей точкой в диапазоне 3.14 - 32.14.
     */
    for (i = 0; i < 30; i ++)
    {
        db = 3.14 + i;
        bigQDouble.put(db);
    }


    /*
     * Извлечем и выведем на экран элементы из bigQDouble.
     */
    cout << "Содержимое bigQDouble: ";

    for (i = 0; i < 30; i ++)
    {
        db = bigQDouble.getDouble();
        cout << db << ' ';
    }

    cout << "\n\n";

    /*---------------------*/

    cout << "Используем smallQDouble для демонстрации ошибок.\n";

    /*
     * Теперь используем smallQDouble для демонстрации ошибок.
     */
    for (i = 0; i < 6; i ++)
    {
        cout << "Пытаемся записать "
             << 88.99 - i;

        smallQDouble.put(88.99 - i);

        cout << '\n';
    }

    cout << '\n';

    /*
     * Другая ошибка в smallQ.
     */
    cout << "Содержимое smallQDouble: ";

    for (i = 0; i < 6; i ++)
    {
        db = smallQDouble.getDouble();
        if (db != 0) cout << db << ' ';
    }

    cout << '\n';

    cout << "--------------------------------------------\n";


    ////////////////////////////////////
    cout << "Используем bigQInt для хранения чисел  в диапазоне 0 - 34.\n";

    /*
     * Поместим в bigQInt числа диапазоне 0 - 34.
     */
    for (i = 0; i < 35; i ++)
    {
        bigQInt.put(i);
    }


    /*
     * Извлечем и выведем на экран элементы из bigQInt.
     */
    cout << "Содержимое bigQInt: ";

    for (i = 0; i < 35; i ++)
    {
        int ii = db = bigQInt.getInt();
        cout << ii << ' ';
    }

    cout << "\n\n";

    /*---------------------*/

    cout << "Используем smallQInt для демонстрации ошибок.\n";

    /*
     * Теперь используем smallQInt для демонстрации ошибок.
     */
    for (i = 0; i < 7; i ++)
    {
        cout << "Пытаемся записать "
             << 100 - i;

        smallQInt.put(100 - i);

        cout << '\n';
    }

    cout << '\n';

    /*
     * Другая ошибка в smallQInt.
     */
    cout << "Содержимое smallQInt: ";

    for (i = 0; i < 7; i ++)
    {
        int ii = smallQInt.getInt();
        if (ii != 0) cout << ii << ' ';
    }

    cout << '\n';

    return 0;
}
