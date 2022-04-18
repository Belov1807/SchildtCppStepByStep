/*
 * Программа требующая ввода
 * пароля, указываемого на
 * командной строке.
 * Программа выводит сообщение,
 * правильный ли пароль введен.
 */

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char password[] = "Password";
    char userPassword[10];
    bool validPassword = false;

    cout << "Пароль: ";
    cout << password;
    cout << "\n\n";

    while (!validPassword)
    {

        cout << "Введите пароль: ";
        cin >> userPassword;

        if (strcmp(password, userPassword) == 0)
        {
            cout << "Пароль введен верно!\n";
            validPassword = true;
        }
        else
        {
            cout << "Пароль введен неверно!\n";
        }
    }

    return 0;
}
