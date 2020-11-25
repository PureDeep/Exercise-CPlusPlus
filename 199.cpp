/*
 * @Author: PureDeep
 * @Date: 2020-11-24 20:03:52
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 20:16:04
 * @FilePath: \Exercise-CPlusPlus\199.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char *p = "abc";
    cout << 1 << endl;
    cout << *p << endl;
    cout << *(++p) << endl;
    return 0;
}