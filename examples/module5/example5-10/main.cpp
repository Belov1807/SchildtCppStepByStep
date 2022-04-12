/*
 * Использование глобальной переменной.
 */
#include <iostream>
using namespace std;

void func1();
void func2();

/*Это глобальная переменная.*/
int subsequence;

int main()
{
    /*Это локальная переменная.*/
    int i;

    for (i = 0; i < 10; i ++)
    {
        subsequence = i * 2;
        func1();
    }

    return 0;
}

void func1()
{
    /*Обращение к глобальной переменной*/
    cout << "count: " << subsequence << "\n";
    func2();
}

void func2()
{
    /*Это локальная переменная*/
    int count;

    for (count = 0; count < 3; count ++) cout << '.';
}
