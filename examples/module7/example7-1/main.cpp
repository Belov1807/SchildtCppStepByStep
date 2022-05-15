/*
 * Использование const
 * с параметром-указателем.
 */
#include <iostream>
using namespace std;

int myNegate(const int *val);

int main()
{
    int result;
    int v = 10;
    
    result = myNegate(&v);
    
    cout << v << " Отрицание " << result;
    cout << "\n";

    return 0;
}


int myNegate(const int *val)
{
    return - *val;
}

/*
 * Это работать не будет!
 *int myNegate(const int *val)
 *{
 *   *val = - *val;
 *   return *val;
 *}
 */

/*
 * Это работать не будет!
 * int myNegate(const int &val)
 *{
 *    val = -val;
 *    return val;
 *}
 */
