/*
 * @Author: PureDeep
 * @Date: 2020-11-24 13:03:49
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-24 13:05:53
 * @FilePath: \Exercise-CPlusPlus\194.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    virtual void f() { cout << "A::f()" << endl; };
};

class B : public A
{
public:
    B() { f(); }
    void g() { f(); }
};

class C : public B
{
public:
    C() {}
    virtual void f() { cout << "C::f()" << endl; }
};

int main(int argc, char *argv[])
{
    C c;
    c.f();
    return 0;
}