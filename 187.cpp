/*
 * @Author: PureDeep
 * @Date: 2020-11-23 21:21:18
 * @LastEditors: PureDeep
 * @LastEditTime: 2020-11-23 21:24:03
 * @FilePath: \Exercise-CPlusPlus\187.cpp
 */
#pragma GCC diagnostic error "-std=c++11"
#include <iostream>

using namespace std;

class A
{
public:
    virtual void func()
    {
        cout << "A func" << endl;
    }
};

class B
{
public:
    virtual void func() { cout << "B func" << endl; }
};

class C : public A, public B
{
public:
    virtual void func() { cout << "C func" << endl; }
};

int main(int argc, char *argv[])
{
    C c;
    A &pa = c;
    B &pb = c;
    C &pc = c;
    pa.func();
    pb.func();
    pc.func();
    return 0;
}