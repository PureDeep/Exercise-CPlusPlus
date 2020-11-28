/*
 * @Author: PureDeep
 * @Date: 2020-11-25 19:49:27
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 19:51:03
 * @FilePath: \Exercise-CPlusPlus\208.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class XA
{
    int x;

public:
    XA(int n) { x = n; }
};

class XB : public XA
{
    int y;

public:
    XB(int a, int b) : XA(a), y(b) {}
};

int main(int argc, char *argv[])
{

    return 0;
}