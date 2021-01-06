/*
 * @Author: PureDeep
 * @Date: 2020-11-23 22:05:51
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 22:08:32
 * @FilePath: \Exercise-CPlusPlus\188.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    virtual ~A()
    {
        cout << "A::~A() called" << endl;
    }
};

class B : public A
{
    char *buf;

public:
    B(int i) { buf = new char[i]; }
    virtual ~B()
    {
        delete[] buf;
        cout << "B::~B() called" << endl;
    }
};

void fun(A *a) { delete a; }

int main(int argc, char *argv[])
{
    A *a = new B(10);
    fun(a);
    return 0;
}