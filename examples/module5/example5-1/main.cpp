/*
 * Пример программы содержащей
 * 2 функции: main() и myfunc().
 */
#include <iostream>
using namespace std;

/*
 * Прототип функции myfunc.
 */
void myfunc();

int main()
{
    cout << "В main()\n";

    /*
     * Вызов myfunc().
     */
    myfunc();

    cout << "Снова в main()\n";

    return 0;
}

/*
 * Это определение функции.
 */
void myfunc()
{
   cout << "Внутри myfunc()\n";
}
