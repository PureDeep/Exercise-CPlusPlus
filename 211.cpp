/*
 * @Author: PureDeep
 * @Date: 2020-11-25 20:52:34
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-25 20:54:17
 * @FilePath: \Exercise-CPlusPlus\211.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    int n;
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
    int getn() { return B::n; }
};

int main(int argc, char *argv[])
{
    D d;
    d.B::n = 10;
    d.C::n = 20;
    cout << d.B::n << " " << d.C::n << endl;
    return 0;
}