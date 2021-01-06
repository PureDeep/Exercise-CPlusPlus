/*
 * @Author: PureDeep
 * @Date: 2020-11-24 10:34:35
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 10:38:58
 * @FilePath: \Exercise-CPlusPlus\190.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class B
{
public:
    void m(int x) { cout << "B::m()" << endl; }
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
    // p->m();
    // d.m(3);
    d.m();
    return 0;
}