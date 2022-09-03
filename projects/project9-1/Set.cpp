/*
 * Проект 9-1.
 *
 * Класс множества для символов.
 */
#include <iostream>
using namespace std;

const int MaxSize = 100;

class Set
{
    /*
     * Число членов.
     */
    int len;
    /*
     * Этот массив будет содержать множество.
     */
    char members[MaxSize];

    /*
     * Возвращает индекс элемента,
     * задаваемого параметром _ch,
     * или -1, если элемент не найден.
     */
    int find(char _ch)
    {
        int i;

        for (i = 0; i < len; i ++)
            if (members[i] == _ch)
                return i;
        return -1;
    }

public:
    /*
     * Конструируем пустое множество.
     */
    Set() { len = 0; }

    /*
     * Возвращаем число элементов множества.
     */
    int getLength() { return len; }

    /*
     * Выводит множество на экран.
     */
    void showset();
    /*
     * Проверяет на членство.
     */
    bool isMember(char _ch);

    /*
     * Добавляет элемент.
     */
    Set operator+(char _ch);
    /*
     * Удаляет элемент.
     */
    Set operator-(char _ch);

    /*
     * Образует объединение.
     */
    Set operator+(Set _ob2);
    /*
     * Образует разность.
     */
    Set operator-(Set _ob2);

};

void Set::showset()
{
    cout << "{ ";
    for (int i = 0; i < len; i ++)
        cout << members[i] << " ";

    cout << "}\n";
}

/*
 * Возвращает true, если _ch есть член множества.
 * Впротивном случае возвращает false.
 */
bool Set::isMember(char _ch)
{
    if (find(_ch) != -1) return true;
    return false;
}

/*
 * Добавление уникального элемента в множество.
 */
Set Set::operator+(char _ch)
{
    Set newset;

    if (len == MaxSize)
    {
        cout << "Множество полно.\n";
        /*
         * Вернуть существующее множество.
         */
        return *this;
    }

    /*
     * Дублируем существующее множество.
     */
    newset = * this;

    /*
     * Смотрим, не существует ли уже этот элемент.
     */
    if (find(_ch) == -1)
    {
        /*
         * Добавим новый элемент в множество.
         */
        newset.members[newset.len] = _ch;
        newset.len ++;
    }
    /*
     * Возвращаем обновленное множество.
     */
    return newset;
}

/*
 * Удаляет элемент из множества.
 */
Set Set::operator-(char _ch)
{
    Set newset;
    /*
     * i будет равно -1, если элемент не найден
     */
    int i = find(_ch);

    /*
     * Копирование и уплотнение оставшихся элементов.
     */
    for (int j = 0; j < len; j ++)
        if (j != i) newset = newset + members[j];

    return newset;
}

/*
 * Объединения множеств.
 */
Set Set::operator+(Set _ob2)
{
    /*
     * Копируем первое множество.
     */
    Set newset = *this;

    /*
     * Добавляем уникальные элементы из второго множества.
     */
    for (int i = 0; i < _ob2.len; i ++)
        newset = newset + _ob2.members[i];

    /*
     * Возвращаем обновленное множество.
     */
    return newset;
}

/*
 * Разность множеств.
 */
Set Set::operator-(Set _ob2)
{
    /*
     * Копируем первое множество.
     */
    Set newset = *this;

    /*
     * Вычитаем элементы второго множества.
     */
    for (int i = 0; i < _ob2.len; i ++)
    {
        newset = newset - _ob2.members[i];
    }

    /*
     * Возвращаем обновленное множество.
     */
    return newset;
}

/*
 * Демонстрация класса Set.
 */
int main()
{
    /*
     * Сконструируем 10-элементное пустое множество.
     */
    Set s1;
    Set s2;
    Set s3;

    s1 = s1 + 'A';
    s1 = s1 + 'B';
    s1 = s1 + 'C';
    
    cout << "s1 после добавления A B C: ";
    s1.showset();
    
    cout << '\n';

    cout << "Проверяем на членство, используя isMember().\n";
    if (s1.isMember('B'))
        cout << "B является членом s1.\n";
    else
        cout << "B не является членом s1.\n";

    if (s1.isMember('T'))
        cout << "T является членом s1.\n";
    else
        cout << "T не является членом s1.\n";

    cout << '\n';

    s1 = s1 - 'B';
    cout << "s1 после s1 = s1 - 'B': ";
    s1.showset();

    s1 = s1 - 'A';
    cout << "s1 после s1 = s1 - 'A': ";
    s1.showset();

    s1 = s1 - 'C';
    cout << "s1 после s1 = s1 - 'C': ";
    s1.showset();

    cout << '\n';

    s1 = s1 + 'A';
    s1 = s1 + 'B';
    s1 = s1 + 'C';
    cout << "s1 после добавления A B C: ";
    s1.showset();

    cout << '\n';

    s2 = s2 + 'A';
    s2 = s2 + 'X';
    s2 = s2 + 'W';
    cout << "s2 после добавления A X W: ";
    s2.showset();

    cout << '\n';

    s3 = s1 + s2;
    cout << "s3 после s3 = s1 + s2 ";
    s3.showset();

    s3 = s3 - s1;
    cout << "s3 после s3 - s1: ";
    s3.showset();

    cout << '\n';

    cout << "s2 после s2 = s2 - s2: ";
    /*
     * Очистка s2.
     */
    s2 = s2 - s2;
    s2.showset();

    cout << '\n';

    s2 = s2 + 'C';
    s2 = s2 + 'B';
    s2 = s2 + 'A';

    cout << "s2 после добавления C B A: ";
    s2.showset();

    return 0;
}
