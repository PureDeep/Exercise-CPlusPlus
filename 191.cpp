/*
 * @Author: PureDeep
 * @Date: 2020-11-24 10:46:33
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 10:51:30
 * @FilePath: \Exercise-CPlusPlus\191.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class B
{
public:
    virtual void m(int x) { cout << "B::m()" << endl; }
};

class D : public B
{
public:
    virtual void m() { cout << "D::m()" << endl; }
};

int main(int argc, char *argv[])
{
    B *p;
    D d;
    p = new D();
    p->m(3);
    // d.m(3);
    d.m();
    return 0;
}