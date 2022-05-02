/*
 * Использование специфического
 * варианта strcat().
 */
#include <iostream>
#include <cstring>
using namespace std;

void mystrcat(char *_s1, char *_s2, int _len = 0);

int main()
{
    char str1[80] = "Это проверка";
    char str2[80] = "0123456789";

  /*
   * Присоединить 5 символов.
   */
    mystrcat(str1, str2, 5);
    cout << str1 << '\n';

  /*
   * Повторная инициализация str1.
   */
    strcpy(str1, "Это проверка");

  /*
   * Присоединить всю строку.
   */
    mystrcat(str1, str2);
    cout << str1 << '\n';

    return 0;
}

/*
 * Специфический вариант strcat().
 */
void mystrcat(char *_s1, char *_s2, int _len)
{
  /*
   * Найдем конец s1.
   */
    while (*_s1) _s1 ++;

    if (_len == 0) _len = strlen(_s2);

    while (*_s2 && _len)
    {
       /*
        * Копируем символы.
        */
        *_s1 = *_s2;
        _s1 ++;
        _s2 ++;
        _len --;
    }

  /*
   * Завершающий 0 для s1.
   */
    *_s1 = '\0';
}
