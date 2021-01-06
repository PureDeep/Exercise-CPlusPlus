/*
 * @Author: PureDeep
 * @Date: 2020-10-27 20:42:56
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-27 20:44:20
 * @FilePath: \Exercise-CPlusPlus\122newAndDelete.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int *pointer = new int[10];
    for (int i = 0; i < 10; i++)
    {
        pointer[i] = i;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << pointer[i] << endl;
    }
    delete[] pointer;
    return 0;
}