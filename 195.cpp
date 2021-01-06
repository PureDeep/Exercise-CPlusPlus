/*
 * @Author: PureDeep
 * @Date: 2020-11-24 13:15:42
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 13:17:40
 * @FilePath: \Exercise-CPlusPlus\195.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    virtual void f() { cout << "A::f() called" << endl; }
};

class B : public A
{
public:
    virtual void f() { cout << "B::f() called" << endl; }
};

int main(int argc, char *argv[])
{
    B b;
    A &x = b;
    void (A::*pf)() = &A::f;
    (x.*pf)();
    return 0;
}