/*
 * @Author: PureDeep
 * @Date: 2020-11-26 08:34:54
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-26 08:37:41
 * @FilePath: \Exercise-CPlusPlus\214.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double xx = 3.14, *pp = &xx;
    cout << &xx << endl;
    cout << *pp << endl;
    return 0;
}