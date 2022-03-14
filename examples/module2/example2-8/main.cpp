/*
 * Демонстрация операторов отношения и логических.
*/
#include <iostream>
using namespace std;

int main()
{
    int i, j;
    bool b1, b2;

    i = 10;
    j = 11;
    if (i < j) cout << "i < j" << endl;
    if (i <= j) cout << "i <= j" << endl;
    if (i != j) cout << "i != j" << endl;
    if (i == j) cout << "Это не будет выполняться" << endl;
    if (i >= j) cout << "Это не будет выполняться" << endl;
    if (i > j) cout << "Это не будет выполняться" << endl;

    b1 = true;
    b2 = false;
    if (b1 && b2) cout << "Это не будет выполняться" << endl;
    if (!(b1 && b2)) cout << "!(b1 & b2) есть истина" << endl;
    if (b1 || b2) cout << "b1 || b2 есть истина" << endl;

    return 0;
}
