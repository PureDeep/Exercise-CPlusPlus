/*
 * @Author: PureDeep
 * @Date: 2020-11-23 17:14:34
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 17:16:53
 * @FilePath: \Exercise-CPlusPlus\183.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
    int x;

public:
    A(int n) { x = n; }
};

class B : public A
{
    int y;

public:
    B(int a, int b) : A(a), y(b){};
};

int main(int argc, char *argv[])
{
    B ans(10, 20);
    return 0;
}