/*
 * Проект 2-2
 * Реализация операции XOR с помощью логических операторов C++.
*/
#include <iostream>
using namespace std;

int main()
{
    bool p, q;

    p = true;
    q = true;

    cout << p << " XOR " << q << " равно " << ((p || q) && (!(p && q))) << endl;

    p = false;
    q = true;

    cout << p << " XOR " << q << " равно " << ((p || q) && (!(p && q))) << endl;

    p = true;
    q = false;

    cout << p << " XOR " << q << " равно " << ((p || q) && (!(p && q))) << endl;

    p = false;
    q = false;

    cout << p << " XOR " << q << " равно " << ((p || q) && (!(p && q))) << endl;

    return 0;
}
