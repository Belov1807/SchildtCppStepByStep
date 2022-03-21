/*
 * switch без предложений break.
 */

#include <iostream>

using namespace std;

int main()
{
    int i;

    for (i = 0; i < 5; i ++)
    {
        switch (i)
        {
        case 0: cout << "Меньше 1\n";
        case 1: cout << "Меньше 2\n";
        case 2: cout << "Меньше 3\n";
        case 3: cout << "Меньше 4\n";
        case 4: cout << "Меньше 5\n";
        }
        cout << "\n";
    }
    return 0;
}
