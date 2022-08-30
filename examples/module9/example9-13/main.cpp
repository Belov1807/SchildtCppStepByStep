/*
 * Используем указатель "this".
 */
#include <iostream>
using namespace std;

class Test
{
    int i;

public:
    void load_i(int _val)
    {
        this->i = _val;
    }
    int get_i()
    {
        return this->i;
    }
} ;

int main()
{
    Test o;

    o.load_i(100);
    cout << o.get_i();

    return 0;
}
