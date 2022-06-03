/*
 * Использование XOR
 * для шифрования и
 * расшифровки сообщения.
 */
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char msg[] = "This is a test";
    char key = 88;

    cout << "Исходное сообщение: " << msg << "\n";

    for (int i = 0 ; i < strlen(msg); i ++)
        msg[i] = msg[i] ^ key;

    cout << "Зашифрованное сообщение: " << msg << "\n";

    for (int i = 0 ; i < strlen(msg); i ++)
        msg[i] = msg[i] ^ key;

    cout << "Расшифрованное сообщение: " << msg << "\n";

    return 0;
}
