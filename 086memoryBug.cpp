/*
 * @Author: PureDeep
 * @Date: 2020-10-15 12:16:30
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 12:17:42
 * @FilePath: \Exercise-CPlusPlus\086memoryBug.cpp
 */
#include <iostream>

using namespace std;

double fun(int i)
{
    volatile double d[1] = {3.14};
    volatile long int a[2];
    a[i] = 1073741824; /* Possibly out of bounds */
    return d[0];
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout << fun(i) << endl;
    }
    return 0;
}