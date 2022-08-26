/*
 * Демонстрация объеденения.
 */
#include <iostream>
using namespace std;

union u_type
{
    u_type(short int _a) { i = _a; };
    u_type(char _x, char _y) { ch[0] = _x; ch[1] = _y; }

    void showchars()
    {
        cout << ch[0] << " ";
        cout << ch[1] << "\n";
    }

    short int i;
    char ch[2];
};

int main()
{
    u_type u(1000);
    u_type u2('X', 'Y');

    cout << "u как целое: ";
    cout << u.i << "\n";
    cout << "u как символы: ";
    u.showchars();

    cout << "u2 как целое: ";
    cout << u2.i << "\n";
    cout << "u2 как символы: ";
    u2.showchars();

    return 0;
}
