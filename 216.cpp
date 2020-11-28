/*
 * @Author: PureDeep
 * @Date: 2020-11-26 08:45:13
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-26 08:45:56
 * @FilePath: \Exercise-CPlusPlus\216.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x = 10, &y = x;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    int *p = &y;
    *p = 100;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}