/*
 * @Author: PureDeep
 * @Date: 2020-11-24 10:25:02
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 10:26:47
 * @FilePath: \Exercise-CPlusPlus\189.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class B
{
public:
    virtual void m() { cout << "B::m()" << endl; }
};

class D : public B
{
public:
    void m() { cout << "D::m()" << endl; }
};

int main(int argc, char *argv[])
{
    B *p;
    D d;
    p = new D();
    p->m();
    d.B::m();
    d.m();
    return 0;
}