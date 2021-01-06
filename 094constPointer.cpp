/*
 * @Author: PureDeep
 * @Date: 2020-10-15 20:22:43
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-10-15 20:27:38
 * @FilePath: \Exercise-CPlusPlus\094constPointer.cpp
 */
#include <iostream>

using namespace std;

int main()
{
    int b = 100;
    int *const a = &b;
    int x = 5, y = 10;
    int *const ptr = &x;
    *ptr = 4; //OK
    //Error: ptr = &y;
    return 0;
}